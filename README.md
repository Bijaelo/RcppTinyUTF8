# RcppTinyUTF8
Small reproducible example of a "quick-and-dirty" method for using external libraries in Rcpp and custom types included within. Note that a better (read: the correct) approach can be read in [R-extension](https://cran.r-project.org/doc/manuals/r-release/R-exts.pdf) and [in this stackoverflow post](https://cran.r-project.org/doc/manuals/r-release/R-exts.pdf).

# Usage:
```R
library(devtools)
install_github("Bijaelo/RcppTinyUTF8")
printUTF("!🌍 olleH")
```

