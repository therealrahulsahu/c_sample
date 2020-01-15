#Q.6
a<-as.integer(readline("Enter a :"))
b<-as.integer(readline("Enter b :"))
c<-as.integer(readline("Enter c :"))
total = a+b+c
avg = total%/%3
print(paste("Total : ", total, sep=""))
print(paste("Average : ", avg, sep=""))
grade = ((total*10)%/%30)
print(paste("Grade : ", grade, sep=""))