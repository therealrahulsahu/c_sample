#Q.9
sqr<-function(n){
  if(n<=0){
    return(0)
  }else{
    return(n*n+sqr(n-1))
  }
}
print(sqr(2))