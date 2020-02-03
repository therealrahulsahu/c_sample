#5
{
  #titanic
  {
    data(Titanic)
    print(summary(Titanic))
    print(str(Titanic))
    print(head(Titanic,32))
    print(nrow(Titanic))
    print(ncol(Titanic))
  }
  #ToothGrowth
  {
    data(ToothGrowth)
    print(summary(ToothGrowth))
    print(str(ToothGrowth))
    print(head(ToothGrowth,5))
    print(nrow(ToothGrowth))
    print(ncol(ToothGrowth))
  }
  #iris
  {
    data(iris)
    print(summary(iris))
    print(str(iris))
    print(head(iris,5))
    print(nrow(iris))
    print(ncol(iris))
  }
  #PlantGrowth
  {
    data(PlantGrowth)
    print(summary(PlantGrowth))
    print(str(PlantGrowth))
    print(head(PlantGrowth,5))
    print(nrow(PlantGrowth))
    print(ncol(PlantGrowth))
  }
  #sleep
  {
    data(sleep)
    print(summary(sleep))
    print(str(sleep))
    print(head(sleep,5))
    print(nrow(sleep))
    print(ncol(sleep))
  }
}

















#Explore a built-in dataset
{
  data(cars)
  #Line Charts
  {
    cars<-head(cars,50)
    plot(cars,type="o")
  }
  #Bar Plot
  {
    cars<-head(cars,5)
    d<-data.matrix(cars)
    barplot(d)
  }
  #Histogram
  {
    hist(mtcars$mpg,main="mtcars",xlab = "mpg")
  }
  #Pie Chart
  {
    cars<-head(cars,1)
    labels<-c("Speed","Distance")
    d<-data.matrix(cars)
    pie(d,labels)
  }
  #Dot Charts
  {
    dotchart(mtcars$mpg,col="red",labels=row.names(mtcars),cex=.7,main="Gas Milage for Car Models",xlab="Miles Per Gallon")
  }
  #Box Plots
  {
    boxplot(mpg~cyl,data=mtcars, main="Car Milage Data",xlab="Number of Cylinders", ylab="Miles Per Gallon")
  }
  #Scatter Plot
  {
    attach(mtcars)
    plot(wt, mpg, main="Scatter Plot",xlab="Car Weight ", ylab="Miles Per Gallon ",pch=19)
  }
  #Kernel Density Plot
  {
    den = density(mtcars$mpg)
    plot(den,main=" Kernel Density of Miles Per Gallon")
    polygon(den, col="red", border="blue")
  }
}
#List and count number of packages
{
  str(allPackage <- installed.packages(.Library, priority = "high"))
  allPackage [, c(1,3:5)]
  cat("The number of packages are",nrow(installed.packages()))
}
#Draw a Bubble Chart using ggplot2 Package
{
  library(ggplot2)
  theme_set(theme_bw() + theme(legend.position = "top")
  )
  # Load data
  data("mtcars")
  df <- mtcars
  
  # Convert cyl as a grouping variable
  df$cyl <- as.factor(df$cyl)
  
  # Inspect the data
  head(df[, c("wt", "mpg", "cyl", "qsec")], 4)
  ggplot(df, aes(x = wt, y = mpg)) + geom_point(aes(color = cyl, size = qsec), alpha = 0.5) + scale_color_manual(values = c("#00AFBB", "#E7B800", "#FC4E07")) + scale_size(range = c(0.5, 12))  # Adjust the range of points size
}
