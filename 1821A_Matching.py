for t in range(int(input())):
    s=input()
    d=1
    if(s[0]=="?"):
        d=9
    elif(s[0]=="0"):
        d=0
    c=s[1:].count("?")
    print(d*pow(10,c))