// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// getter.cpp
cpp11::list migration_matrices();
extern "C" SEXP _tekkamaki_migration_matrices() {
  BEGIN_CPP11
    return cpp11::as_sexp(migration_matrices());
  END_CPP11
}
// getter.cpp
std::vector<double> natural_mortality();
extern "C" SEXP _tekkamaki_natural_mortality() {
  BEGIN_CPP11
    return cpp11::as_sexp(natural_mortality());
  END_CPP11
}
// getter.cpp
std::vector<double> fishing_mortality();
extern "C" SEXP _tekkamaki_fishing_mortality() {
  BEGIN_CPP11
    return cpp11::as_sexp(fishing_mortality());
  END_CPP11
}
// getter.cpp
std::vector<double> weight_for_age();
extern "C" SEXP _tekkamaki_weight_for_age() {
  BEGIN_CPP11
    return cpp11::as_sexp(weight_for_age());
  END_CPP11
}
// getter.cpp
void read_json(const std::string& file);
extern "C" SEXP _tekkamaki_read_json(SEXP file) {
  BEGIN_CPP11
    read_json(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(file));
    return R_NilValue;
  END_CPP11
}
// nbinom.cpp
std::vector<int> cpp_rnbinom(int n, double size, double mu);
extern "C" SEXP _tekkamaki_cpp_rnbinom(SEXP n, SEXP size, SEXP mu) {
  BEGIN_CPP11
    return cpp11::as_sexp(cpp_rnbinom(cpp11::as_cpp<cpp11::decay_t<int>>(n), cpp11::as_cpp<cpp11::decay_t<double>>(size), cpp11::as_cpp<cpp11::decay_t<double>>(mu)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_tekkamaki_cpp_rnbinom",        (DL_FUNC) &_tekkamaki_cpp_rnbinom,        3},
    {"_tekkamaki_fishing_mortality",  (DL_FUNC) &_tekkamaki_fishing_mortality,  0},
    {"_tekkamaki_migration_matrices", (DL_FUNC) &_tekkamaki_migration_matrices, 0},
    {"_tekkamaki_natural_mortality",  (DL_FUNC) &_tekkamaki_natural_mortality,  0},
    {"_tekkamaki_read_json",          (DL_FUNC) &_tekkamaki_read_json,          1},
    {"_tekkamaki_weight_for_age",     (DL_FUNC) &_tekkamaki_weight_for_age,     0},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_tekkamaki(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
