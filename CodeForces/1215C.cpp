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
//#define mp make_pair
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
	vector<int> pos01, pos10;
	for (int i = 0; i < n; i++) {
		if (s[i] != t[i]) {
			if (s[i] == 'a') {
				pos01.pb(i);
			} else {
				pos10.pb(i);
			}
		}
	}

	if (pos01.size() % 2 != pos10.size() % 2) {
		cout << -1 << endl;
		return 0;
	}



	vector<pair<int, int> > ans;
	for (int i = 0; i + 1 < pos01.size(); i += 2) {
		ans.pb(mp(pos01[i], pos01[i + 1]));
	}
	for (int i = 0; i + 1 < pos10.size(); i += 2) {
		ans.pb(mp(pos10[i], pos10[i + 1]));
	}
	if (pos01.size()% 2) {
		int x = pos01.back();
		int y = pos10.back();
		ans.pb(mp(x, x));
		ans.pb(mp(x, y));
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i].F + 1 << ' ' << ans[i].S + 1 << endl;
	}
	
	
 
	// cout<<endl;
 
	// }
	return 0;
}
