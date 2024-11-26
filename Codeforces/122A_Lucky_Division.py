a=int(input())
num=[4,7,44,47,74,77,444,447,474,477,744,747,774,777]
flag=1
for i in num:
    if((a%i)==0):
        flag=0
        break
if(flag==0):
    print("YES")
else:
    print("NO")