// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "tinyutf8_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// printUTF8
int printUTF8(utf8str str);
RcppExport SEXP _tinyutf8_printUTF8(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< utf8str >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(printUTF8(str));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tinyutf8_printUTF8", (DL_FUNC) &_tinyutf8_printUTF8, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_tinyutf8(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}