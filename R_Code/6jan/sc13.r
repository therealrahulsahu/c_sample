#Q.13
n<-as.integer(readline("Enter n :"))
val = 0
i = 1
while(i<n){
  if(n%%i==0){
    val = val + i
  }
  i=i+1
}
if(val==n){
  print("Perfect No.")
}else{
  print("Not A Perfect No.")
}