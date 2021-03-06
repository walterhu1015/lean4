/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich and Leonardo de Moura
-/
import Lean.Data.KVMap

namespace Lean

def Options := KVMap

namespace Options
def empty : Options  := { : KVMap }
instance : HasEmptyc Options := ⟨empty⟩
instance : Inhabited Options := ⟨empty⟩
instance : HasToString Options := inferInstanceAs (HasToString KVMap)
end Options

structure OptionDecl :=
(defValue : DataValue)
(group    : String := "")
(descr    : String := "")

def OptionDecls := NameMap OptionDecl

instance OptionDecls.inhabited : Inhabited OptionDecls :=
⟨({} : NameMap OptionDecl)⟩

private def initOptionDeclsRef : IO (IO.Ref OptionDecls) :=
IO.mkRef (mkNameMap OptionDecl)

@[init initOptionDeclsRef]
private constant optionDeclsRef : IO.Ref OptionDecls := arbitrary _

@[export lean_register_option]
def registerOption (name : Name) (decl : OptionDecl) : IO Unit := do
decls ← optionDeclsRef.get;
when (decls.contains name) $
  throw $ IO.userError ("invalid option declaration '" ++ toString name ++ "', option already exists");
optionDeclsRef.set $ decls.insert name decl

def getOptionDecls : IO OptionDecls := optionDeclsRef.get

@[export lean_get_option_decls_array]
def getOptionDeclsArray : IO (Array (Name × OptionDecl)) := do
decls ← getOptionDecls;
pure $ decls.fold
 (fun (r : Array (Name × OptionDecl)) k v => r.push (k, v))
 #[]

def getOptionDecl (name : Name) : IO OptionDecl := do
decls ← getOptionDecls;
(some decl) ← pure (decls.find? name) | throw $ IO.userError ("unknown option '" ++ toString name ++ "'");
pure decl

def getOptionDefaulValue (name : Name) : IO DataValue := do
decl ← getOptionDecl name;
pure decl.defValue

def getOptionDescr (name : Name) : IO String := do
decl ← getOptionDecl name;
pure decl.descr

def setOptionFromString (opts : Options) (entry : String) : IO Options := do
let ps := (entry.splitOn "=").map String.trim;
[key, val] ← pure ps | throw $ IO.userError "invalid configuration option entry, it must be of the form '<key> = <value>'";
defValue ← getOptionDefaulValue key.toName;
match defValue with
| DataValue.ofString v => pure $ opts.setString key val
| DataValue.ofBool v   =>
  if key == "true" then pure $ opts.setBool key true
  else if key == "false" then pure $ opts.setBool key false
  else throw $ IO.userError ("invalid Bool option value '" ++ val ++ "'")
| DataValue.ofName v   => pure $ opts.setName key val.toName
| DataValue.ofNat v    =>
  match val.toNat? with
  | none   => throw (IO.userError ("invalid Nat option value '" ++ val ++ "'"))
  | some v => pure $ opts.setNat key v
| DataValue.ofInt v    =>
  match val.toInt? with
  | none   => throw (IO.userError ("invalid Int option value '" ++ val ++ "'"))
  | some v => pure $ opts.setInt key v

@[init] def verboseOption : IO Unit :=
registerOption `verbose { defValue := true, group := "", descr := "disable/enable verbose messages" }

@[init] def timeoutOption : IO Unit :=
registerOption `timeout { defValue := DataValue.ofNat 0, group := "", descr := "the (deterministic) timeout is measured as the maximum of memory allocations (in thousands) per task, the default is unbounded" }

@[init] def maxMemoryOption : IO Unit :=
registerOption `maxMemory { defValue := DataValue.ofNat 2048, group := "", descr := "maximum amount of memory available for Lean in megabytes" }

class MonadOptions (m : Type → Type) :=
(getOptions : m Options)

export MonadOptions (getOptions)

instance monadOptsFromLift (m n) [MonadOptions m] [MonadLift m n] : MonadOptions n :=
{ getOptions := liftM (getOptions : m _) }

section Methods

variables {m : Type → Type} [Monad m] [MonadOptions m]

def getBoolOption (k : Name) (defValue := false) : m Bool := do
opts ← getOptions;
pure $ opts.getBool k defValue

def getNatOption (k : Name) (defValue := 0) : m Nat := do
opts ← getOptions;
pure $ opts.getNat k defValue

end Methods
end Lean
