#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
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
// lli ans[N], a[N];

int solve(){
	lli n,a,k;

	string s;
	// f=0;
	cin>>n;
	// cin>>s;
	std::vector<lli> v1(n+1,0);
	std::vector<lli> v2(n+1,0);
	for(lli i =0;i<n;i++){
		cin>>k;
		lli f=0;
		for(lli j =0;j<k;j++){
			cin>>a;
			if(v1[a]==0 &&f==0){
				v1[a]=1;
				v2[i+1]=1;
				// break;
				f=1;
			}
		}

		
	}

	for(lli i =1;i<=n;i++){
		if(v2[i]==0){
			for(lli j=1;j<=n;j++){
				if(v1[j]==0){
					
					return cout<<"IMPROVE"<<endl<<i<<" "<<j<<endl ,0;
				}
			}
		}
	}
	return cout<<"OPTIMAL"<<endl ,0;

		

}	

 
// int n, k, m,l,a[200004],i;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
	// lli x,y,z,k,b,j,c,d,m;
	fastIO
	w(t){

		solve();
		 
	}

	return 0;
	
	
	
	
}
