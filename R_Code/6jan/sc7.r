#Q.7
ch<-as.integer(readline("Enter 1-Circle 2-Rectangle 3-Triagle :"))
ar = 0
if(ch==1){
  r<-as.integer(readline("Enter Radius :"))
  ar = 22/7*r*r
}else if(ch==2){
  l<-as.integer(readline("Enter Length :"))
  b<-as.integer(readline("Enter Breath :"))
  ar = l*b
}else if(ch==3){
  h<-as.integer(readline("Enter Height :"))
  b<-as.integer(readline("Enter Breath :"))
  ar = 0.5*h*b
}else{
  print("Invalid Choice")
}
print(paste("Area : ", ar))
