#Q.7
to_bin<-function(n){
    res = ''
    while(n>0){
      res <- paste(n%%2, res, sep='')
      n=n%/%2
    }
    return(res)
}
print(to_bin(65535))
