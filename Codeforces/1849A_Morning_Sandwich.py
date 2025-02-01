for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if(a>(b+c)):
        print(2*(b+c)+1)
    elif(a==(b+c)):
        print(2*(b+c)-1)
    else:
        print(2*a-1)