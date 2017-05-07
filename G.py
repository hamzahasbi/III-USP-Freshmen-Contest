n=int(input())
a=list(map(int,input().split()))

sv=[0 for i in range (4)]

l="ABCD"
mx=-1

for i in range (n):
    sv[i%4]+=a[i]


mx=max(sv)

for i in range(4):
    #print(sv[i])
    if sv[i]==mx :
        print(l[i])
        break
