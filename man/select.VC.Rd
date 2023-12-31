% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/select.VC.R
\name{VCselect}
\alias{VCselect}
\title{Variable selection for a pqrBayes object}
\usage{
VCselect(obj, sparse, iterations = 10000, kn = 2, degree = 2)
}
\arguments{
\item{obj}{pqrBayes object.}

\item{sparse}{logical flag.}

\item{iterations}{the number of MCMC iterations.}

\item{kn}{the number of interior knots for B-spline.}

\item{degree}{the degree of B-spline basis.}
}
\value{
an object of class `VCselect' is returned, which includes the indices of the selected predictors (e.g. genetic factors).
}
\description{
Variable selection for a pqrBayes object
}
\details{
For class `Sparse', the median probability model (MPM) (Barbieri and Berger, 2004) is used to identify predictors that are significantly associated
with the response variable. For class `NonSparse', variable selection is based on 95\% credible interval.
Please check the references for more details about the variable selection.
}
\references{
Ren, J., Zhou, F., Li, X., Ma, S., Jiang, Y. and Wu, C. (2022). Robust Bayesian variable selection for gene-environment interactions. 
{\emph{Biometrics}, (in press)} \doi{10.1111/biom.13670}

Barbieri, M.M. and Berger, J.O. (2004). Optimal predictive model selection. {\emph{Ann. Statist}, 32(3):870–897}
}
\seealso{
\code{\link{pqrBayes}}
}
