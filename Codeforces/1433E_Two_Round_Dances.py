def fact(n):
    if(n==0):
        return 1
    else:
        return n*fact(n-1)
n=int(input())
print((2*fact(n))//(n*n))