def sod(n):
    sum=0
    while(n!=0):
        sum+=n%10
        n//=10
    return sum
for t in range(int(input())):
    a=int(input())
    if(a%10==9 and (a+1)%20==0):
        flag=False
        for i in range(1,10):
            for j in range(1,10):
                p=pow(i,j)
                x=(int)((a-p)/2)
                y=a-x
                if(abs(sod(x)-sod(y))<=1):
                    flag=True
                    print(x,y)
                    break
            if(flag):
                break
    else:
        if(a%2==0):
            print(a//2,a//2)
        else:
            print((a+1)//2,(a-1)//2)