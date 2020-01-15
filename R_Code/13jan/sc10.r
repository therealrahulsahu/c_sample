#Q.10
sd<-function(data){
  mn = mean(data)
  sum=0
  for(x in data){
    sum=sum+((x-mn)**2)
  }
  return(sum)
}

evaluate<-function(data){
  sum=0
  for(x in data){
    sum=sum+x
  }
  print(paste("Sum : ", sum))
  print(paste("Average : ", sum/length(data)))
  ans=((sqr(data))/(length(data)-1))**0.5
  print(paste("SD : ", ans))
}
evaluate(c(1,2,3,4,5))
