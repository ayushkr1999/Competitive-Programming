#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 2000005
// #define N 1000000000+5
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
 
 
lli v1[N],  v3[N];
// std::vector<lli> v1[N];
// lli v2[N];
// lli ans[N], a[N];
// lli maxi=0;

lli sqr(lli a){
	return a*a;
}

 
// int n, k, m,l,a[200004],i;
// string s;
lli A,R,M,n,ans,k;
lli a,b,x,y,m;
string s;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	// lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
	// lli x,y,z,k,b,j,c,d,m;
	fastIO
	lli t,l,r,f;
	// w(t){
	f=0;
	cin>>n>>m;
	std::vector<lli> v1;
	std::vector<lli> v2;
	std::vector<lli> v3;
	std::vector<lli> v4;

	for(lli i=0;i<n;i++){
		cin>>a;
		if(a&1){
			v1.pb(a);
		}
		else{
			v2.pb(a);
		}
	}
	for(lli i=0;i<m;i++){
		cin>>a;
		if(a&1){
			v3.pb(a);
		}
		else{
			v4.pb(a);
		}
	}
	// for(auto x:v1){
	// 	cout<<x<<" ";
	// }
	cout<<min(v1.size(),v4.size())+min(v2.size(),v3.size());
	// }
	return 0;
	

}