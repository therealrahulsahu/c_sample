#Q.11
sec<-as.integer(readline("Enter Seconds : "))
cat('Hour : ', sec%/%3600, '\nMinute : ', (sec%%3600)%/%60, '\nSeconds : ', ((sec%%3600)%%60))