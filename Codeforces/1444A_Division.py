import math
for _ in range(int(input())):
    a,b=map(int,input().split())
    if(a%b!=0):
        print(a)
    else:
        c=b
        lis=set()
        ans=1
        for i in range(2,int(math.sqrt(b))+1):
            while(c%i==0):
                lis.add(i)
                c//=i
        if(c>1):
            lis.add(c)
        for i in lis:
            d=a
            while(d%b==0):
                d//=i
            ans=max(ans,d)
        print(ans)