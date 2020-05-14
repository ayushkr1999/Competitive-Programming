#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
#define N 1000005
#define ll long long
#define ld long double
#define lli long long int
#define pb push_back
#define INF 10000000000
#define mod 1000000007
#define MOD 1000000007
#define mp make_pair
#define loop(n) for (lli i = 0; i < n; i++)
#define FOR(i,a,b) for (lli i = a; i < b; i+=1)
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
 
 
lli v1[N], v2[N];
// lli ans[N], a[N];

	

 
// int n, k, m,l,a[200004],i;
int32_t main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
	// lli x,y,z,k,b,j,c,d,m;
	
	// w(t){

	lli n;
	string s;

	// cin>>s;
	// cin>>k;
	cin>>n;
	// std::vector<pair<lli,lli>> v1;
	std::vector<lli> v1;
	// string s;
	cin>>s;
	lli pre=1;
	string res="(";
	lli haf=n/2-1;
	a=0,t=0;
	for(lli i =0;i<n;i++){
		if(s[i]=='(')t++;
	}
	for(lli i =0;i<n;i++){
		if(s[i]=='?'){
			if(2*t<n)s[i]='(',t++;
			else s[i]=')';
		}
		if(s[i]=='(')a++;
		if(2*a<i+1 || (i==n-1&& 2*a!=n) || (i!=n-1 && 2*a==i+1)) return cout<<":(", 0;
	}
	
	cout<<s;

      
	

	// cout<<ans;
	// cout<<endl;

 
	// }

	return 0;
	
	
	
	
}
