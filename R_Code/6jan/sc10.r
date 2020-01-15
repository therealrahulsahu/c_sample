#Q.10
n<-as.integer(readline("Enter n :"))
f=1
while(n>1){
  f=f*n
  n=n-1
}
print(paste("Factorial : ", f))