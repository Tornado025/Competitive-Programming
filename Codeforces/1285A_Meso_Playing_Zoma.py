d=int(input())
a=input()
b=0
c=0
for ch in a:
    if(ch=='L'):
       b=b-1
    else:
        c=c+1
print(c-b+1)