def fib_series(i,j,k):
    if k!=0:
        print(i,end=" ")
        fib_series(j,i+j,k-1)


fib_series(0,1,int(input("Enter elements of fibonacci series :")))