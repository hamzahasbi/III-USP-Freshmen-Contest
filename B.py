from math import sqrt
x,y=map(int,input().split())
a,b=map(int,input().split())

if(sqrt(x*x+y*y)<sqrt(a*a+b*b)):print("Russo")
elif (sqrt(x*x+y*y)>sqrt(a*a+b*b)):print("Wil")
else : print("Empate")
