#Q.3
yr=as.integer(readline("Enter a Year : "))
ans=FALSE
if(yr%%4==0){
  if(yr%%100==0){
    if(yr%%400==0){
      ans=TRUE
    }else{
      ans=FALSE
    }
  }else{
    ans=TRUE
  }
}else{
  ans=FALSE
}
if(ans){
  print("A Leap Year")
}else{
  print("Not A Leap Year")
}