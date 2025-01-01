for _ in range(int(input())):
    a=int(input()) 
    s=input()
    d=0
    for i in s:
      if(i=='('):
         d+=1
      elif(i==')'  and d>0):
         d-=1
    print(d) 