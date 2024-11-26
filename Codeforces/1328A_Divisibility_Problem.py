for t in range(int(input())):
    a,b=map(int,input().split())
    if(a%b==0):
        print("0")
    else:
        print(abs(b-(a%b)))