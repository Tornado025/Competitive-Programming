for _ in range(int(input())):
    n=int(input())
    lis=list(map(int,input().split()))
    arr=[]
    for i in range(0,n-1):
        if(lis[i]==lis[i+1]):
            continue
        else:
            arr.append(lis[i])
    arr.append(lis[n-1])
    ans=0
    b=0
    for i in arr:
        ans+=1
        b+=1
    for i in range(0,b-2):
        if((arr[i]<arr[i+1] and arr[i+1]<arr[i+2]) or (arr[i]>arr[i+1] and arr[i+1]>arr[i+2])):
            ans-=1
    print(ans)