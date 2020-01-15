#Q.12
n<-as.integer(readline("Enter n :"))
i=2
res = TRUE
while(i<=n/2){
  if(n%%i==0){
    res = FALSE
    break
  }
  i=i+1
}
if(res){
  print("Is Prime No.")
}else{
  print("Not A Prime No.")
}