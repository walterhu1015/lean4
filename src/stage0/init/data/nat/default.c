// Lean compiler output
// Module: init.data.nat.default
// Imports: init.data.nat.basic init.data.nat.div init.data.nat.bitwise
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* initialize_init_data_nat_basic(lean_object*);
lean_object* initialize_init_data_nat_div(lean_object*);
lean_object* initialize_init_data_nat_bitwise(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_init_data_nat_default(lean_object* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (lean_io_result_is_error(w)) return w;
w = initialize_init_data_nat_basic(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_init_data_nat_div(w);
if (lean_io_result_is_error(w)) return w;
w = initialize_init_data_nat_bitwise(w);
if (lean_io_result_is_error(w)) return w;
return w;
}
#ifdef __cplusplus
}
#endif