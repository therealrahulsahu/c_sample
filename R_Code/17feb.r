#Q1
{
  data=read.csv("RK\\student.csv")
  print(data)
}

#Q2
{
  maxper=max(data$percentage)
  dt1=subset(data,percentage == maxper)
  print(dt1)
}

#Q3
{
  dt2=subset(data,branch=="CSE" | branch=="IT")
  print(dt2)
}

#Q4
{
  dt3=subset(data,percentage>=80)
  print(dt3)
}

#Q5
{
  dt4=subset(data, as.Date(doa) < as.Date("2014-05-01"))
  print(dt4)
}

#Q6 using code
{
  s1=subset(data,select = c(rollno,name,branch,percentage))
  s2=subset(data,select = doa)
  write.csv(s1,"RK\\student1.csv")
  write.csv(s2,"RK\\DOA.csv")
}

#Q7
{
  sheet1=read.csv("RK\\student1.csv")
  sheet2=read.csv("RK\\doa.csv")
  print(sheet1)
  print(sheet2)
  
}

#Q8
{
  merged_data=cbind(sheet1,sheet2)
  print(merged_data)
}

#Q9
{
  write.csv(merged_data,"RK\\merged.csv")
}

#Q10
{
  rmv=na.omit(data)
  print(rmv)
}
