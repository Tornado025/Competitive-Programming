for _ in range(int(input())) :
     k=int(input()) 
     d=1
     while(d<k):
          d*=2
          if(d>=k):
               d//=2
               break
     lis=[]
     f=d-1
     while(f>=0):
            lis.append(f) 
            f-=1
     f=d
     while(f<k):
              lis.append(f) 
              f+=1
     for i in lis:
              print(i, end=" ")
     print()