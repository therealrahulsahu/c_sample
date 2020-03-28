#program1
{
  x<-c(Inf,NA,NaN,"")
  print(class(Inf))
  print(mode(Inf))
  print(storage.mode(Inf))
  print(typeof(Inf))
  print(class(NA))
  print(mode(NA))
  print(storage.mode(NA))
  print(typeof(NA))
  print(class(NaN))
  print(mode(NaN))
  print(storage.mode(NaN))
  print(typeof(NaN))
  print(class(""))
  print(mode(""))
  print(storage.mode(""))
  print(typeof(""))
}

#program2
{
  pet <- sample(c("dog","cat","hamster","goldfish"), 1000, replace = TRUE)
  print(pet[1:8])
  summary(as.factor(pet))
}

#program3
{
  beaver1<-data.frame("bodytemp"=c(5,20))
  beaver2<-data.frame("bodytemp"=c(7,19))
  beaver1$id <- c(1,1)
  beaver2$id<-c(2,2)
  beaver <- cbind(beaver1, beaver2)
  print(beaver)
  subset(beaver, subset = bodytemp < 10)
}

#program4
{
  x <- data.frame("roll"=c(1705157,1705159,1705141,1705161), "Name" = c("Rahul","Saloni","Justin","Tewary"), "department"= c("CSE","CSE","CSE","CSE"), "course"=c("btech","btech","btech","btech"),"yoj"=c(2017,2017,2017,2017))
  print(x)
  subset(x, subset = yoj == 2018)
  subset(x, subset = roll != "")
  
}

#program5
{
  x=c("r","a","h","u","l","s","a","h","u")
  s<-0
  for(i in x){
    
    if(i %in% "a" || i %in% "e" || i %in% "i" || i %in% "o" || i %in% "u" || i %in% "A" || i %in% "E" || i %in% "I" || i %in% "O" || i %in% "U"){
      s=s+1
    }
  }
  print(s)
}  

#program6
{
  string_split = strsplit("xyz", split = "")
  rev_order = nchar("xyz"):1
  reversed_chars = string_split[[1]][rev_order]
  paste(reversed_chars, collapse = "")
}

#program7
{
  sub<-substring("Extraction",2,6)
  gsub(sub,"V-Day","Extraction")
}

#program8
{
 pos<-regexpr("ext","extraction")
 print(pos)   
 gsub("ext","tst","extraction") 
}
 

#program9
{
  string<-(c("Grim  return  to  the  planet  of apes!!"))
  print(string)
  gsub("  "," ",string)
}

#program10
{
  install.packages('bizdays')
  create.calendar(name, holidays = integer(0), weekdays = NULL, start.date = NULL, end.date = NULL, adjust.from = adjust.none,adjust.to = adjust.none, financial = TRUE)
}

#program11
{ 
  f<-c("single", "married", "married", "single")
  is.factor(f)
  f<-factor(c("single", "married", "married", "single"), levels = c("single","married", "divorced"))
  print(f)
}

#program12
{
  x <- factor(c("mohak", "neerad", "nkg"))
  print(x)
  x <- factor(c("mohak", "neerad", "nkg", "Rahul"), levels = c("Rahul","nkg", "payel","pritam","nkg","harsh"));
  print(x)
}






-------------------------------------------------

emp.data<-data.frame( emp_id=c(1:5), emp_name=c("Rick","Dan","Michelle","Ryan","Gary"), salary=c(623.3,515.2,611.0,729.0,843.25), start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-0511","2015-03-27")), stringsAsFactors=FALSE ) 
> emp.data

Died.At <-c(22,40,72,41) Writer .At <-c(16, 18,36,36) First.Name<-c("John","Edgar","Walt", "Jane") Second.Name<-c("Doe","Poe","Whitman","Austen") Sex<-c("MALE", "MALE","MALE", "FEMALE") Date.Of.Death<-c("2015-05-10", "1849-10-07", "1892-03-26","1817-07-18") 

-=-----------------------------------------------
Date.Of.Death=as.Date(c("2015-05-10", "1849-10-07", "1892-03-26","1817-07-18"))
data=data.frame(Died.At=c(22,40,72,41),Writer.At=c(16, 18,36,36),First.Name=c("John","Edgar","Walt", "Jane"),Second.Name=c("Doe","Poe","Whitman","Austen"),Sex=c("MALE", "MALE","MALE", "FEMALE"),Date.Of.Death) 
data
str(data)
res=data.frame(data$Sex,data$First.Name,data$Second.Name)
res
res2=data.frame(data[c(3,4),c(2,4)])
res2
class(data)
str(data)
