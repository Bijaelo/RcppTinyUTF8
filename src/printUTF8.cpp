#include <Rcpp.h>
#include "tinyutf8/tinyutf8.h"

typedef tiny_utf8::string utf8str;
using namespace Rcpp;

// Need this and "tinyutf8_types.h" to allow type conversion.
namespace Rcpp {
  template <> utf8str as<utf8str>(SEXP x){
    if(TYPEOF(x) != STRSXP || Rf_xlength(x) > 1)
      Rcpp::stop("Unable to convert SEXP of type %s to utf8str", Rf_type2char(TYPEOF(x)));
    utf8str xx(Rcpp::as<const char*>(x));
    return xx;
  }
}
// [[Rcpp::export]]
int printUTF8(utf8str str){
  for_each(str.rbegin(), str.rend(), [](char32_t codepoint){
    Rcout << codepoint;
  });
  Rcout << '\n';
  return 0;
}
