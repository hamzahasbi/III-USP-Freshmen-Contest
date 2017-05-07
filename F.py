n=int(input())
a=list(map(int,input().split()))
ans=0
dp=0
for i in range(n):
    dp+=a[i]
    #print(dp)
    if dp>=5 : 
        ans+=1
        dp-=5
if dp>0 : ans+=1
print(ans)
