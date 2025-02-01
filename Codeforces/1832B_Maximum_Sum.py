for _ in range(int(input())):
    n,k=map(int,input().split())
    lis=list(map(int,input().split()))
    lis.sort()
    pref=[0]*(n+1)
    for i in range(0,n):
        pref[i+1]=pref[i]+lis[i]
    ans=0
    for i in range(0,k+1):
        ans=max(ans,pref[n-(k-i)]-pref[2*i])
    print(ans)