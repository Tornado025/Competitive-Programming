for _ in range(int(input())):
    a,b,c=map(int,input().split())
    d=((c*(b+1)-1)//(a-1))
    e=((c*(b+1)-1)%(a-1))
    if(e==0):
        print(d+c)
    else:
        print(d+c+1)