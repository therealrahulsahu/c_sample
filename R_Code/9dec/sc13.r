#Q.13
am <-as.integer(readline("Enter Amount :"))
cat('100s : ', am%/%100, '\n50s : ', (am%%100)%/%50, '\n10s : ', ((am%%100)%%50)%/%10, '\n1s : ', ((am%%100)%%50)%%10)