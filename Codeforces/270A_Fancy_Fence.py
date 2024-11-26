for t in range(int(input())):
    a=int(input())
    a=180-a
    if(360%a==0):
        print("YES")
    else:
        print("NO")