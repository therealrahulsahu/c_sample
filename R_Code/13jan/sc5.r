#Q.5
reverse<-function(n){
  t1<-floor(log10(n))
  t2<-0
  for(i in t1:1){
    t2<-t2+floor(n/10^i) * 10^(t1-i)
  }
  return(n*10^t1-99*t2)
}
print(reverse(12345))