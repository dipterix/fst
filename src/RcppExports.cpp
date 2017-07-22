// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fststore
SEXP fststore(Rcpp::String fileName, SEXP table, SEXP compression, SEXP uniformEncoding);
RcppExport SEXP fst_fststore(SEXP fileNameSEXP, SEXP tableSEXP, SEXP compressionSEXP, SEXP uniformEncodingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type uniformEncoding(uniformEncodingSEXP);
    rcpp_result_gen = Rcpp::wrap(fststore(fileName, table, compression, uniformEncoding));
    return rcpp_result_gen;
END_RCPP
}
// fstmetadata
SEXP fstmetadata(Rcpp::String fileName);
RcppExport SEXP fst_fstmetadata(SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    rcpp_result_gen = Rcpp::wrap(fstmetadata(fileName));
    return rcpp_result_gen;
END_RCPP
}
// fstretrieve
SEXP fstretrieve(Rcpp::String fileName, SEXP columnSelection, SEXP startRow, SEXP endRow);
RcppExport SEXP fst_fstretrieve(SEXP fileNameSEXP, SEXP columnSelectionSEXP, SEXP startRowSEXP, SEXP endRowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type columnSelection(columnSelectionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type startRow(startRowSEXP);
    Rcpp::traits::input_parameter< SEXP >::type endRow(endRowSEXP);
    rcpp_result_gen = Rcpp::wrap(fstretrieve(fileName, columnSelection, startRow, endRow));
    return rcpp_result_gen;
END_RCPP
}
// fstcomp
SEXP fstcomp(SEXP rawVec, SEXP compressor, SEXP compression);
RcppExport SEXP fst_fstcomp(SEXP rawVecSEXP, SEXP compressorSEXP, SEXP compressionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rawVec(rawVecSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compressor(compressorSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compression(compressionSEXP);
    rcpp_result_gen = Rcpp::wrap(fstcomp(rawVec, compressor, compression));
    return rcpp_result_gen;
END_RCPP
}
// getnrofthreads
SEXP getnrofthreads();
RcppExport SEXP fst_getnrofthreads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getnrofthreads());
    return rcpp_result_gen;
END_RCPP
}
// setnrofthreads
int setnrofthreads(SEXP nrOfThreads);
RcppExport SEXP fst_setnrofthreads(SEXP nrOfThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type nrOfThreads(nrOfThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(setnrofthreads(nrOfThreads));
    return rcpp_result_gen;
END_RCPP
}
// hasopenmp
SEXP hasopenmp();
RcppExport SEXP fst_hasopenmp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(hasopenmp());
    return rcpp_result_gen;
END_RCPP
}
