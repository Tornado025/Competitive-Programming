for _ in range(int(input())):
    n=int(input())
    s=input()
    rev=""
    for i in s:
        rev=i+rev
    d=0
    for i in rev:
        if(i==')'):
            d+=1
        else:
            break
    if(d>(n-d)):
        print("YES")
    else:
        print("NO")
