print("Hello World")
print(23.9+11.6)
print(mean(1:5))
print(min(1:5))
print(max(1:5))
print(sum(1:5))
?"+"
help("mean")
x<-5
print(class(x))
print(class(2+3i))
print(class(2L))
print(class('2L'))
print(charToRaw('Rahul'))

apple<-c('red', 'green', "yellow")
print(apple)
print(apple[1])
cat(apple[1], apple[2])

car<-c(12, 'waganor', TRUE, 3-4i, 4.6)
car

house<-list(c(1,2,3), 1, TRUE, 4.6, 4-3i)
house

v1<-c(1:3)
v2<-c(8:11)
v3<-c(v1,v2)
v3
l4<-list(v1,v2)
l4


m1<-matrix(c(1,2,3,4,5,6),nrow=2,ncol=3,byrow=TRUE)
m1

m2<-matrix(c(1,2,3,4,5,6),nrow=3,ncol=3,byrow=TRUE)
m2

m3d<-array(c('green', 'yello'), dim=c(3,3,2))
m3d

apple_c<-c('green', 'green', 'yellow', 'pink', 'red', 'red', 'yellow')
apple_c_set<-factor(apple_c)
apple_c_set

BMI<-data.frame(
  gender=c('male', 'male', 'female'),
  height=c(188, 182, 158),
  weigth=c(75, 70, 68),
  age=c(42,38,26)
)
BMI

myclass<-data.frame(
  name=c('Ankit', 'Justin', 'Rahul', 'Anurag'),
  sex=c('M', 'M', 'M', 'M'),
  weight=c(83, 72, 75, 59),
  roll=c(144, 141, 157, 118)
)
myclass

uni=57
a=uni
a
b<-uni
b
uni->c
c

print(ls())

k1<-c(1,2,3.4)
k2<-c(6,7,8)

print(k1+k2)
print(k1-k2)
print(k1*k2)
print(k1/k2)
print(k1%%k2)
print(k1%/%k2)
print(k1^k2)

b1<<-c(1,2,3)
b1
