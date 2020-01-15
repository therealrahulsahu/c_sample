#Q.17
n<-as.integer(readline("Enter n :"))
i = 1
while(i<=n){
  ln=""
  if(i%%2!=0){
    #odd
    j=1
    while(j<=i){
      ln = paste(ln, j,"")
      j=j+1
    }
  }else{
    #even
    j=i
    while(j>0){
      ln = paste(ln, j,"")
      j=j-1
    }
  }
    print(ln)
  i=i+1
}