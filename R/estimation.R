#' Estimation and estimation accuracy for a pqrBayes object
#'
#' Calculate estimated regression coefficients with estimation accuracy from linear, binary LASSO, group LASSO and quantile VC models, respectively.
#'
#' @param object an object of class `pqrBayes'.
#' @param coefficient the vector of quantile regression coefficients under a linear model (i.e., LASSO), binary LASSO and group LASSO or the matrix of true varying coefficients evaluated on the grid points under a varying coefficient model.
#' @param u.grid the vector of grid points under a varying coefficient model. When fitting a linear regression model (i.e., LASSO), binary LASSO or group LASSO, u.grid = NULL.
#' @param model the model to be fitted. Users can choose "linear" for a linear model (i.e., LASSO), "binary" for binary LASSO, "group" for group LASSO or "VC" for a varying coefficient model.
#' @usage estimation.pqrBayes(object,coefficient,u.grid=NULL,model="linear")
#' @return  an object of class `pqrBayes.est' is returned, which is a list with components:
#' \item{error}{mean square error or integrated mean square errors and total integrated mean square error.}
#' \item{coeff.est}{estimated values of the regression coefficients or the varying coefficients.}
#' @seealso \code{\link{pqrBayes}}
#' @examples
#' ## The quantile regression model
#' data(data)
#' data = data$data_linear
#' g=data$g
#' y=data$y
#' e=data$e
#' coeff = data$coeff
#' fit1=pqrBayes(g,y,u=NULL,e,d = NULL,quant=0.5,spline=NULL,model="linear")
#' estimation=estimation.pqrBayes(fit1,coeff,model="linear")

#'
#' @export
estimation.pqrBayes = function(object,coefficient,u.grid=NULL,model="linear"){
  if(model=="VC"){
    pqrBayes.est = estimation_vc(object,coefficient,u.grid)
  }
  else if(model=="linear"){
    pqrBayes.est = estimation_lin(object,coefficient)
  }
  else if(model=="binary"){
    pqrBayes.est = estimation_lin(object,coefficient)
  }
  else if(model=="group"){
    pqrBayes.est = estimation_lin(object,coefficient)
  }
  else{
    stop("model should be either VC, linear,binary or group")
  }
  class(pqrBayes.est) = "pqrBayes.est"
  return(pqrBayes.est)
}
  