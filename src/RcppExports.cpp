// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sc_cpp_recresid
NumericVector sc_cpp_recresid(const arma::mat& X, const arma::vec& y, unsigned int start, unsigned int end, const double& tol);
RcppExport SEXP strucchange_sc_cpp_recresid(SEXP XSEXP, SEXP ySEXP, SEXP startSEXP, SEXP endSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type start(startSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type end(endSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_recresid(X, y, start, end, tol));
    return rcpp_result_gen;
END_RCPP
}
