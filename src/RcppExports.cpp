// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// KGE2011cpp
double KGE2011cpp(std::vector<double> x, std::vector<double> y);
RcppExport SEXP _ccrits_KGE2011cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(KGE2011cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// NSEcpp
double NSEcpp(std::vector<double> x, std::vector<double> y);
RcppExport SEXP _ccrits_NSEcpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(NSEcpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// LMEcpp
double LMEcpp(std::vector<double> x, std::vector<double> y);
RcppExport SEXP _ccrits_LMEcpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(LMEcpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _ccrits_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ccrits_KGE2011cpp", (DL_FUNC) &_ccrits_KGE2011cpp, 2},
    {"_ccrits_NSEcpp", (DL_FUNC) &_ccrits_NSEcpp, 2},
    {"_ccrits_LMEcpp", (DL_FUNC) &_ccrits_LMEcpp, 2},
    {"_ccrits_rcpp_hello_world", (DL_FUNC) &_ccrits_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_ccrits(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
