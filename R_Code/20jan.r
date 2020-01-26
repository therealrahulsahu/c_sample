#Q.1
{arr<-c(1,2,3,4,5)
print(sqrt(arr))}

#Q.2
{
a<-c(1,2,3,4,5)
b<-c(1,2,3,4,5)
result<-TRUE
if(length(a)==length(b)){
  for(x in a == b){
    result<-x
    if(!x){
      break
    }
  }
}else{
  result<-FALSE
}
if(result){
  print('Equal')
}else{
  print('Not Equal')
}
}

#Q.3
{v1<-vector('numeric', 5)
v2<-vector('numeric', 5)+1
print(v1 & v2)
}

#Q.4
{n<-as.integer(readline('Enter n : '))
v<-vector('numeric', n)
for(x in 1:n){
  v[x]<-as.integer(readline('Enter : '), 5)
}
print(sort(v))}

#Q.5
{
  v1<-vector('numeric', 6)+3
  v2<-1:6
  print(v1^v2)
}

#Q.6
{
  v1<-c(4,4,2,6,1,6,6,1)
  print(max(v1))
  print(min(v1))
  print(sum(v1))
}

#Q.7
{
  v1<-c(2,4,5,21,67,7,16)
  if(7 %in% v1){
    print('Found')
  }else{
    print('Not Found')
  }
}

#Q.8
{
  ls<-list(1, 2, 3, 1.4, 'rk', c('1', '4', '4', '7'), list('5'))
  class(ls[1])
}

#Q.9
{
  v<-list(c(1,2,3,4), t(matrix(c(1:4), nrow = 2)), list(1, 1.7))
  print(v[2])
}

#Q.10
{
  v<-list(c(1,2,3,4), t(matrix(c(1:4), nrow = 2)), list(1, 1.7))
  k<-c(v, list(c(4,4)))
  k[2]<-NULL
  print(k)
}

#Q.11
{
  v1<-list(1,2,3,4,5)
  v2<-list('jan', 'feb', 'mar', 'apr', 'may')
  r<-c(v1, v2)
  print(r)
}

#Q.12
{
  mat<-t(matrix(1:12, nrow=3, ncol=4))
  print(mat[1,])
  print(mat[2,])
  print(mat[,2])
}

#Q.13
{
  m1<-t(matrix(1:9, nrow = 3, ncol = 3))
  m2<-t(matrix(11:19, nrow = 3, ncol = 3))
  print(m1+m2)
  print(m1-m2)
  print(m1*m2)
  print(m1/m2)
}

#Q.14
{
  m1<-t(matrix(1:9, nrow = 3))+4
  print(m1)
}

#Q.15
{
  m1<-t(matrix(1:9, nrow = 3))
  for(i in 1:3){
    for(j in 1:3){
      if(m1[i,j] < 5){
        m1[i,j]<-0
      }
    }
  }
  print(m1)
}

#Q.16
{
  m1<-matrix(c(1,2,3,4), nrow = 2)
  m2<-matrix(c(1,3,2,4), nrow = 2)
  k=m1==t(m2)
  x=FALSE
  for(i in 1:2){
    for(j in 1:2){
      x<-k[i,j]
      if(!x){
        break
      }
    }
    if(!x){
      break
    }
  }
  if(x){
    print('Symmetric')
  }else{
    print('Not')
  }
}
#Q.17
{
  m1<-matrix(1:9, nrow = 3, byrow = TRUE)
  for(x in 1:length(m1[,1])){
    print(sum(m1[x,]))
  }
}

#Q.18
{
  m1<-array(1:27,dim=c(3,3,3))
  print(m1[2,,3])
}

#Q.19
{
  m1<-array(1:27,dim=c(3,3,3))
  for(i in 1:length(m1[1,1,])){
    for(j in 1:length(m1[1,,i])){
      print(sum(m1[j,,i]))
    }
  }
}

#Q.20
{
  
}