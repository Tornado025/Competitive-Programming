for _ in range(int(input())):
    n = int(input())
    s = str(n)
    arr1=[]
    for i in range(0,19):
        arr1.append(pow(10,i)+1)
    arr=[]
    for i in range(1,19):
        if(n%arr1[i]==0):
            arr.append(n//arr1[i])
    arr.sort()
    print(len(arr))
    for i in arr:
        print(i,end=" ")