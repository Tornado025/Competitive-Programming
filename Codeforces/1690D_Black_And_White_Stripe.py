for t in range(int(input())):
    a,k=map(int,input().split())
    s=input()
    b=0
    c=0
    w=0
    ans=a
    while(b<a):
        if(s[b]=='W'):
            w+=1
        if((b-c)+1<k):
            b+=1
            continue
        b+=1
        ans=min(ans,w)
        if(s[c]=='W'):
            w-=1
        c+=1
    print(ans)