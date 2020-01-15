#Q.5
n=as.integer(readline("Enter n : "))
val=n
ans=0
while(val>0){
  ans = ans*10 + (val%%10)
  val=val%/%10
}
if(ans==n){
  print("Pallindrome")
}else{
  print("Not Pallindrome")
}