// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// greedy_rcpp
LogicalVector greedy_rcpp(IntegerVector x, IntegerVector y);
RcppExport SEXP _reclin2_greedy_rcpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(greedy_rcpp(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_reclin2_greedy_rcpp", (DL_FUNC) &_reclin2_greedy_rcpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_reclin2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
