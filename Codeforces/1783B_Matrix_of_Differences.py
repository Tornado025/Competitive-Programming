for _ in range(int(input())):
    n=int(input())
    list=[]
    for i in range(0,n*n):
        if(i%2==0):
            list.append(i//2+1)
        else:
            list.append((n*n)-(i//2))
    k=0
    for i in range(0,n):
        for j in range(0,n):
            if(i%2==0):
                print(list[i*n+j],end=" ")
            else:
                print(list[i*n+n-1-j],end=" ")
        print()