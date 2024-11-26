def fact(n):
    if(n==0):
        return 1
    else:
        return n*fact(n-1)
def combi(n):
    return (fact(a)//(fact(a-n)*fact(n)))
a=int(input())
print(pow(combi(5),2)*fact(5))