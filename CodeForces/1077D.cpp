#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 2000005
#define ll long long
#define ld long double
#define lli int	
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
lli A,R,M,n,ans,k;
lli a,b,x,y,m;

std::vector<lli> v2;
bool check(lli x){
	v2.clear();
	for(lli i=0;i<N;i++){
		lli need= min(v1[i]/x,k-int(v2.size()));

		for(lli j=0;j<need;j++){
			v2.pb(i);
		}
	}
	// cout<<v2.size()<<endl;
	return k==int(v2.size());
}
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
	cin>>n>>k;
	for(lli  i=0;i<n;i++){
		cin>>x;
		v1[x]++;
	}
	l=0,r=n,t=0;
	lli ans1=0,ans2=0;
	// sort(v1,v1+n);
	while(r-l>1){
		m=(l+r)/2;
		// cout<<l<<" "<<m<<" "<<r<<endl;
		if(check(m)){
			l=m;
		}
		else{
			r=m;
		}
	}
	if(!check(r))check(l);

	for(auto x: v2){
		cout<<x<<" ";
		// cout<<endl;
	}
	

		
		


	
	// }

	return 0;

}
