#Q.3
HCF<-function(a, b){
  if(b==0){
    return(a)
  }else{
    return(HCF(b, a%%b)) 
  }
}
print(HCF(3,6))
LCM<-function(a, b){
  return(a*b/HCF(a,b))
}
print(LCM(3,18))