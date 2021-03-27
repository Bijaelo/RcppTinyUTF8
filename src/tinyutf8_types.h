
#include "tinyutf8/tinyutf8.h"
typedef tiny_utf8::string utf8str;

#include <Rcpp.h>
#include <string>

namespace Rcpp{
  template<> utf8str as<utf8str>(SEXP);
}
