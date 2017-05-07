n=int(input())

a=list(map(int,input().split()))


mx=sum(a)

a.sort()
i=0
while((mx&1)==1 and i<n):
    if((a[i]&1)==1):mx-=a[i]
    i+=1
    
print(mx)
