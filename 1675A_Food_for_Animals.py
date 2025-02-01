for t in range(int(input())):
    a,b,c,x,y=map(int,input().split())
    flag=True
    if((a+c)>=x):
        if(a<x):
            c=c-(x-a)
    else:
        flag=False
    if((b+c)<y):
        flag=False
    if(flag==True):
        print("YES")
    else:
        print("NO")