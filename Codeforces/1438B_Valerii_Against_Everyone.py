for _ in range(int(input())):
    a=int(input())
    lis=list(map(int,input().split()))
    lis.sort()
    flag=False
    i=1
    while(i<a):
        if(lis[i]==lis[i-1]):
            flag=True
            break
        i+=1
    if(flag):
        print("YES")
    else:
        print("NO")
            
