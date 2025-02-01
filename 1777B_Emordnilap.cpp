def fact(n):
    ans=1
    for i in range(1,n+1):
        ans*=i
        ans%=1000000007
    return ans
for _ in range(int(input())):
    a=int(input())
    print((a*(a-1)*fact(a))%1000000007)
    