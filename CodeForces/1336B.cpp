#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 1000005
#define ll long long
#define ld long double
#define lli long long
#define pb push_back
#define INF 10000000000
#define mod 1000000007
#define MOD 1000000007
#define mp make_pair
#define loop(n) for (lli i = 0; i < n; i++)
#define FOR(a,b) for (lli i = a; i < b; i+=1)
#define st(v) v.begin(),v.end()
#define F first
#define S second
#define mp make_pair
#define itr :: iterator it
#define w(t) cin>>t; while(t --)
#define inputarr(a,n) for(lli i=0;i<n;i++)cin>>a[i];
#define input(a,n) for(lli i=0;i<n;i++){ lli x ; cin>>x; a.push_back(x);}
#define printarr(a,n) for(lli i=0;i<n;i++)cout<<a[i]; cout<<endl;
#define print(vec) for(auto xt : vec)cout<<xt; cout<<endl;
#define printset(st) for(auto xt : st) cout<<xt<<" ";    cout<<endl;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
// typedef tree<int,null_type,less<int>,rb_tree_tag,
// tree_order_statistics_node_update> indexed_set;
typedef tree<int, null_type, less_equal<int>, 
             rb_tree_tag, 
             tree_order_statistics_node_update> 
    ordered_set; 
 
 
lli v1[N], v2[N], v3[N];
// std::vector<lli> v1[N];
// lli v2[N];
// lli ans[N], a[N];
// lli maxi=0;

lli sqr(lli a){
	return a*a; 
}
lli mini;
void fun(vector<lli> v1,vector<lli> v2,vector<lli> v3){

	for(auto x:v1){
		auto y=lower_bound(st(v2),x);
		auto z=upper_bound(st(v3),x);
		if(y==v2.end() || z==v3.begin())continue;
		z--;
		mini=min(mini,sqr(x- *y)+sqr(*y- *z)+sqr(*z -x));


	}

}
 
// int n, k, m,l,a[200004],i;
// string s;



int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli m,o,e,k,b,l,c,d,x,y,f,t,r,a,n;
	// lli x,y,z,k,b,j,c,d,m;
	fastIO

	w(t){
	// map<int,vector<lli>> has;
	// lli ans[1005];
	cin>>a>>b>>c;
	lli cnt=0;
	std::vector<lli> v1,v2,v3;
	for(lli i =0;i<a;i++)cin>>x,v1.pb(x);
	for(lli i =0;i<b;i++)cin>>x,v2.pb(x);
	for(lli i =0;i<c;i++)cin>>x,v3.pb(x);

	mini=9e18;
	sort(st(v1));
	sort(st(v2));
	sort(st(v3));
	fun(v1,v2,v3),fun(v2,v3,v1);
	fun(v3,v2,v1),fun(v3,v1,v2);
	fun(v1,v3,v2),fun(v2,v1,v3);

	cout<<mini<<endl;
	



		// cout<<endl;
		// ans=-1;

		


		// cout<<ans<<endl;
		// cout<<endl;

		
		


	
	}

	return 0;

}
