#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 2000005
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

// lli sqr(lli a)return a*a;

 
// int n, k, m,l,a[200004],i;
// string s;
lli A,R,M,n,ans,k;
lli a,b,x,y,m;
// lli count (lli m){
// 	lli ans = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] < k) {
//             ans += (k - a[i]);
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         if (b[i] > k) {
//             ans += (b[i] - k);
//         }
//     }
//     return ans;
// }
// lli f(lli k) {
//     lli ans = 0;
//     for (int i = 1; i <=n; i++) {
//         if ( v1[i] < k) {
//             ans += (k - v1[i]);
//         }
//     }
//     for (int i = 1; i <= m; i++) {
//         if (v2[i] > k) {
//             ans += (v2[i] - k);
//         }
//     }
//     return ans;
// }

// lli ternary(lli r){

//     lli l = 0;
//     while(l<=r){
//         lli ml = ( l + (r - l) / 3), mr = (r - (r - l) / 3);
//         //printf("%d %d %d %d\n",l,r,ml,mr);
        
//         cout<<l<<" "<<ml<<" "<<mr<<" "<<r<<endl;
//         if (f(mr)<f(ml))
//             l = ml+1;
//         else r = mr-1;
//     }
//     return f(l);
// }
string s;
// bool fun(lli m){
// 	v1[0]=0,v1[1]=0;
// 	for(lli i=0;i<m;i++){
// 		v1[s[i]-'a']++;
// 	}
// 	if(min(v1[0],v1[1])<=k){
// 		ans=max(ans,m);
// 		return true;

// 	}
// 	for(lli i=0;i+m<n;i++){
// 		v1[s[i]-'a']--;
// 		v1[s[i+m]-'a']++;
// 		if(min(v1[0],v1[1])<=k){
// 			ans=max(ans,m);
// 			return true;

// 		}
// 	}
	
// 	return false;
// }
std::vector<lli> v2;
bool check(lli x){
	v1[0]=0,v1[1]=0,v1[2]=0;
	for(lli i=0;i<x;i++){
		v1[s[i]-'1']++;
	}
	if(v1[0]>0 && v1[1]>0 && v1[2]>0)return true;

	for(lli i=x;i<s.size();i++){
		v1[s[i]-'1']++;
		v1[s[i-x]-'1']--;

		if(v1[0]>0 && v1[1]>0 && v1[2]>0)return true;

	}

	return false;
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
	w(t){
	f=0;
	// cin>>n>>k;

	cin>>s;
	l=-1,r=s.size()+1;
	lli ans=INF;
	while(r-l>1){
		m=(l+r)/2;
		// cout<<l<<" "<<m<<" "<<r<<endl;
		if(check(m)){
			r=m;
			// cout<<"hii";
			ans=min(ans,m);

		}
		else{
			l=m;
		}
	}

	cout<<(ans==INF?0:ans)<<endl;
	

		
		


	
	}

	return 0;

}
