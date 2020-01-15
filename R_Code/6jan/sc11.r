#Q.11
n<-as.integer(readline("Enter n :"))
a=1
b=1
st=""
while(a<=n){
  st = paste(st, " ", a)
  k=b
  b=a+b
  a=k
}
print(st)