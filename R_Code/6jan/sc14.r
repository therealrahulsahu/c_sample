#Q.14
n<-as.integer(readline("Enter n :"))
i=1
val=0
st=""
while(i<=n){
  val=val+i
  st=paste(st, val, " ")
  i=i+1
}
print(st)