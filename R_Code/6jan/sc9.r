#Q.9
n<-as.integer(readline("Enter n :"))
i = 1
st = ""
while(i<=n){
  st = paste(st, i*i, sep=" ")
  i=i+1
}
print(st)

