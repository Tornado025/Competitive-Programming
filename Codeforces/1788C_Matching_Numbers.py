for t in range(int(input())):
    a=int(input())
    if(a%2==0):
        print("No")
    else:
        b=2*a
        print("Yes")
        for i in range(1,a+1,2):
            print(i,b)
            b-=1
        for i in range(2,a+1,2):
            print(i,b)
            b-=1