#Q.16
n<-as.integer(readline("Enter n :"))
val = n
dig = 0
while(val>0){
  val=val%/%10
  dig=dig+1
}
val=n
res = 0
while(val>0){
  res = res + (val%%10)**dig
  val=val%/%10
}
if(res==n){
  print("Armstrong No.")
}else{
  print("Non Armstring No.")
}