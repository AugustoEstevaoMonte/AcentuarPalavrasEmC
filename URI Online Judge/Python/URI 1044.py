x=input().split()
a,b=x
a=int(a)
b=int(b)
if b>a:
    resul=b%a
else:
    resul=a%b
    
if resul==0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")