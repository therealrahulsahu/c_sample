sum<-function(a,b){
  print(a+b)
}
mul<-function(a,b){
  print(a*b) 
}
sub<-function(a,b){
  return(a-b)
}
div<-function(a,b){
  return(a/b)
}
pow<-function(a,b){
  return(a**b)
}
#sum(3,4)
#mul(3,4)
#print(sub(5,6))
#print(div(4,5))
#print(pow(2,3))

fence<-function(wrapper, original){
  return(c(wrapper, original, wrapper))
}

a<-c('r', 'a', 'h', 'u', 'l')
b<-c('1', '2', '3', '4')
#print(fence(a, b))

fence<-function(data){
  ln<-length(data)
  while(ln!=0){
    return(c(data[1], data[ln]))
  }
  return(data)
}
k<-c('a', 'b', 'c')
print(fence(k))
print(k)