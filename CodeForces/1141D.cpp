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
lli gcd(lli a,lli b){
 if(a==0){
 	return b;
 }
 gcd(b%a,a);	
}
bool sign(lli a){
	return a>0;
}
 
// int n, k, m,l,a[200004],i;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli m,o,e,a,k,b,l,r,c,d,x,y,f;
	// lli x,y,z,k,b,j,c,d,m;
	
	// w(t){
	lli n;
	// lli v1[3];
	cin>>n;
	string s,t;
	cin>>s>>t;
	std::vector<vector<lli>> left(26);
	std::vector<vector<lli>> right(26);
 	std::vector<lli> wl, wr;
 	vector<lli> cl(26), cr(26);
 	for(lli i=0;i<n;i++){
 		if(s[i]!= '?'){
 			left[s[i]-'a'].pb(i);
 		}
 		else{
 			wl.pb(i);
 		}
 	}
 	for(lli i=0;i<n;i++){
 		if(t[i]!= '?'){
 			right[t[i]-'a'].pb(i);
 		}
 		else{
 			wr.pb(i);
 		}
 	}
 	// cout<<1;
 	std::vector<pair<lli,lli>> p;
 	for(lli i =0;i<26;i++){
 		for(lli j=0;j<min(left[i].size(),right[i].size());j++){
 			p.pb(mp(left[i][j]+1,right[i][j]+1));
 			
 		}
 		cl[i]=cr[i]=min(left[i].size(),right[i].size());
 	}
 	// cout<<1;
 	for(lli  i=0;i<26;i++){
 		while(cl[i]<left[i].size() && !wr.empty()){
 			p.pb(mp(left[i][cl[i]]+1,wr[wr.size()-1]+1));
 			wr.pop_back();
 			cl[i]++;
 		}
 	}
 	// cout<<1;
 	for(lli  i=0;i<26;i++)	{
 		while(cr[i]<right[i].size() && !wl.empty()){
 			p.pb(mp(wl[wl.size()-1]+1,right[i][cr[i]]+1));
 			wl.pop_back();
 			cr[i]++;
 		}
 	}

 	for(lli i =0;i<min(wl.size(),wr.size());i++){
 		p.pb(mp(wl[i]+1,wr[i]+1));
 	}
 	cout << p.size() << endl;
	for (auto x: p)
	    cout << x.F << " " << x.S << endl;


	// cout<<endl;
 
	// }
	return 0;
}
