for t in range(int(input())):
    n=int(input())
    c=n%2020
    d=(n-c)//2020-c
    if(d>=0 and 2020*d+2021*c==n):
        print("YES")
    else:
        print("NO")