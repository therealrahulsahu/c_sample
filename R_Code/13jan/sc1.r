#Q.1
avg<-function(data){
  sum=0
  for(x in data){
    sum=sum+x
  }
  return(sum/length(data))
}
print(paste("Average : ", avg(c(1,2,3))))