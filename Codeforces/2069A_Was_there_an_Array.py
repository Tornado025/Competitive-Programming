for t in range(int(input())):
    n=int(input())
    s=list(input().split())
    a=""
    for c in s:
        a+=c
    if "101" in a:
        print("NO")
    else:
        print("YES")