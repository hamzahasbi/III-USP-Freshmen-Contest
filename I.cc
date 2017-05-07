/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 05/05/2017 22:48:23
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define ui unsigned int
#define ud unsigned double
#define uf unsigned float
#define pi 2*acos(0.0)
#define module cin.ignore()
#define rep(i,l,r) for(auto i=l;i<=r;i++)
#define range(x,y) for(auto x:y)
//inline lcm(int a,int b) {return a*b/__gcd(a,b);}
//inline gcd(ll a,ll b) {return 1LL*b == 0 ? a : gcd(1LL*b, a*1LL % b*1LL);}
using namespace std;

main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		unsigned long long x,y,sum=a+b;
		if(sum&1) x=(sum)/2,y=x+1;
		else x=y=(sum)>>1LL;
		if(abs(a-b)>1) printf("%lld %lld\n",x,y);
		else printf("Ok\n");
	}
	
	
	return 0;
}
