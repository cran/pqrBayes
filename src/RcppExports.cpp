// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// BGLPointMass
Rcpp::List BGLPointMass(arma::mat xx, arma::vec y, arma::mat W, unsigned int s, unsigned int q, int maxSteps, arma::vec hatAlpha, arma::vec hatBeta, arma::vec hatInvTauSqStar, arma::mat invSigAlpha0, double hatPiStar, double hatLambdaSqStar, double hatSigmaSq, double aStar, double bStar, double alpha, double gamma, double sh1, double sh0, int progress);
RcppExport SEXP _pqrBayes_BGLPointMass(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatAlphaSEXP, SEXP hatBetaSEXP, SEXP hatInvTauSqStarSEXP, SEXP invSigAlpha0SEXP, SEXP hatPiStarSEXP, SEXP hatLambdaSqStarSEXP, SEXP hatSigmaSqSEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP sh1SEXP, SEXP sh0SEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatBeta(hatBetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSqStar(hatInvTauSqStarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatPiStar(hatPiStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type sh1(sh1SEXP);
    Rcpp::traits::input_parameter< double >::type sh0(sh0SEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BGLPointMass(xx, y, W, s, q, maxSteps, hatAlpha, hatBeta, hatInvTauSqStar, invSigAlpha0, hatPiStar, hatLambdaSqStar, hatSigmaSq, aStar, bStar, alpha, gamma, sh1, sh0, progress));
    return rcpp_result_gen;
END_RCPP
}
// BGL
Rcpp::List BGL(arma::mat xx, arma::vec y, arma::mat W, unsigned int s, unsigned int q, int maxSteps, arma::vec hatBeta, arma::vec hatAlpha, arma::vec hatInvTauSq, arma::mat invSigAlpha0, double hatLambdaSqStar, double hatSigmaSq, double aStar, double bStar, double alpha, double gamma, int progress);
RcppExport SEXP _pqrBayes_BGL(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP sSEXP, SEXP qSEXP, SEXP maxStepsSEXP, SEXP hatBetaSEXP, SEXP hatAlphaSEXP, SEXP hatInvTauSqSEXP, SEXP invSigAlpha0SEXP, SEXP hatLambdaSqStarSEXP, SEXP hatSigmaSqSEXP, SEXP aStarSEXP, SEXP bStarSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatBeta(hatBetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatInvTauSq(hatInvTauSqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatLambdaSqStar(hatLambdaSqStarSEXP);
    Rcpp::traits::input_parameter< double >::type hatSigmaSq(hatSigmaSqSEXP);
    Rcpp::traits::input_parameter< double >::type aStar(aStarSEXP);
    Rcpp::traits::input_parameter< double >::type bStar(bStarSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BGL(xx, y, W, s, q, maxSteps, hatBeta, hatAlpha, hatInvTauSq, invSigAlpha0, hatLambdaSqStar, hatSigmaSq, aStar, bStar, alpha, gamma, progress));
    return rcpp_result_gen;
END_RCPP
}
// BRGL_SS
Rcpp::List BRGL_SS(arma::mat xx, arma::vec y, arma::mat W, unsigned int s, unsigned int L, int maxSteps, arma::vec hatAlpha, arma::mat hatBeta, double hatTau, arma::vec hatV, arma::vec hatSg, arma::mat invSigAlpha0, double hatPi, double hatEtaSq, double xi1, double xi2, double r, double a, double b, double sh1, double sh0, int progress);
RcppExport SEXP _pqrBayes_BRGL_SS(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP sSEXP, SEXP LSEXP, SEXP maxStepsSEXP, SEXP hatAlphaSEXP, SEXP hatBetaSEXP, SEXP hatTauSEXP, SEXP hatVSEXP, SEXP hatSgSEXP, SEXP invSigAlpha0SEXP, SEXP hatPiSEXP, SEXP hatEtaSqSEXP, SEXP xi1SEXP, SEXP xi2SEXP, SEXP rSEXP, SEXP aSEXP, SEXP bSEXP, SEXP sh1SEXP, SEXP sh0SEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type hatBeta(hatBetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatTau(hatTauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatV(hatVSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatSg(hatSgSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatPi(hatPiSEXP);
    Rcpp::traits::input_parameter< double >::type hatEtaSq(hatEtaSqSEXP);
    Rcpp::traits::input_parameter< double >::type xi1(xi1SEXP);
    Rcpp::traits::input_parameter< double >::type xi2(xi2SEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type sh1(sh1SEXP);
    Rcpp::traits::input_parameter< double >::type sh0(sh0SEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BRGL_SS(xx, y, W, s, L, maxSteps, hatAlpha, hatBeta, hatTau, hatV, hatSg, invSigAlpha0, hatPi, hatEtaSq, xi1, xi2, r, a, b, sh1, sh0, progress));
    return rcpp_result_gen;
END_RCPP
}
// BRGL
Rcpp::List BRGL(arma::mat xx, arma::vec y, arma::mat W, unsigned int s, unsigned int L, int maxSteps, arma::vec hatAlpha, arma::mat hatBeta, double hatTau, arma::vec hatV, arma::vec hatSg, arma::mat invSigAlpha0, double hatEtaSq, double xi1, double xi2, double r, double a, double b, int progress);
RcppExport SEXP _pqrBayes_BRGL(SEXP xxSEXP, SEXP ySEXP, SEXP WSEXP, SEXP sSEXP, SEXP LSEXP, SEXP maxStepsSEXP, SEXP hatAlphaSEXP, SEXP hatBetaSEXP, SEXP hatTauSEXP, SEXP hatVSEXP, SEXP hatSgSEXP, SEXP invSigAlpha0SEXP, SEXP hatEtaSqSEXP, SEXP xi1SEXP, SEXP xi2SEXP, SEXP rSEXP, SEXP aSEXP, SEXP bSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type maxSteps(maxStepsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatAlpha(hatAlphaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type hatBeta(hatBetaSEXP);
    Rcpp::traits::input_parameter< double >::type hatTau(hatTauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatV(hatVSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hatSg(hatSgSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type invSigAlpha0(invSigAlpha0SEXP);
    Rcpp::traits::input_parameter< double >::type hatEtaSq(hatEtaSqSEXP);
    Rcpp::traits::input_parameter< double >::type xi1(xi1SEXP);
    Rcpp::traits::input_parameter< double >::type xi2(xi2SEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(BRGL(xx, y, W, s, L, maxSteps, hatAlpha, hatBeta, hatTau, hatV, hatSg, invSigAlpha0, hatEtaSq, xi1, xi2, r, a, b, progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pqrBayes_BGLPointMass", (DL_FUNC) &_pqrBayes_BGLPointMass, 20},
    {"_pqrBayes_BGL", (DL_FUNC) &_pqrBayes_BGL, 17},
    {"_pqrBayes_BRGL_SS", (DL_FUNC) &_pqrBayes_BRGL_SS, 22},
    {"_pqrBayes_BRGL", (DL_FUNC) &_pqrBayes_BRGL, 19},
    {NULL, NULL, 0}
};

RcppExport void R_init_pqrBayes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
