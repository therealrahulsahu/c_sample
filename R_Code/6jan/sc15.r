#Q.15
n<-as.integer(readline("Enter n :"))
st=0
while(n>0){
  st= st*10+(n%%10)
  n=n%/%10
}
print(st)