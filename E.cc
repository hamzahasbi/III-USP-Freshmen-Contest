/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 07/05/2017 20:29:53
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


bool predicat(pair<long long,long long>a,pair<long long,long long>b){
	if(a.first<b.first) return true;
	if(a.first==b.first && a.second<b.second) return true;
	return false;
}
main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	long long s;
	scanf("%d%lld",&n,&s);
	vector<pair<long long,long long>>a(n);
	for(int i=0;i<n;i++){
		scanf("%lld%lld",&a[i].first,&a[i].second);
	}
	sort(a.begin(),a.end(),predicat);
	long long ans=0LL;
	for(int i=0;i<n;i++){
		s+=a[i].first;
		ans+=(s-a[i].second);
	}
	cout<<ans<<endl;
	return 0;
}
