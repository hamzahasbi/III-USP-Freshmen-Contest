n=int(input())

a=list(map(int,input().split()))

hi=sum(a)
ans=0
lo=0
for i in range(n):
    lo+=a[i]
    ans+=a[i]*(hi-lo)
print(ans )
