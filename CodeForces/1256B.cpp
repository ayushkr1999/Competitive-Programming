#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


#define ll long long
#define ld long double
#define lli long long int
#define pb push_back
#define INF 1000000000
#define mod 1000000007
#define MOD 1000000007
//#define mp make_pair
#define loop(n) for (lli i = 0; i < n; i++)
#define FOR(i,a,b) for (lli i = a; i < b; i+=1)
#define st(v) v.begin(),v.end()
#define F first
#define S second
#define itr :: iterator it
#define w(t) cin>>t; while(t --)
#define inputarr(a,n) for(lli i=0;i<n;i++)cin>>a[i];
#define input(a,n) for(lli i=0;i<n;i++){ lli x ; cin>>x; a.push_back(x);}
#define printarr(a,n) for(lli i=0;i<n;i++)cout<<a[i]; cout<<endl;
#define print(vec) for(auto xt : vec)cout<<xt; cout<<endl;
#define printset(st) for(auto xt : st) cout<<xt<<" ";    cout<<endl;

bool fun(std::vector<lli> v1,lli n){
	sort(st(v1));
	lli area= v1[0]*v1[4*n-1];
	for(lli i=0;i<n;i++){
		lli lf = i * 2, rg = 4 * n - (i * 2) - 1;
			if (v1[lf] != v1[lf + 1] || v1[rg] !=v1[rg - 1] || v1[lf] * 1ll * v1[rg] != area) {
				return false;
			}
	}
	return true;
}


int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	// lli t,m,o,e,a,k,b,l,r;
	lli x,y,z,k,a,b,c,d,m;
	lli n,t;
	// lli f=0;
	
		
	w(t){
		cin>>n;
		// cout<<n;
		std::vector<lli> v1;
		std::vector<lli> v2(n+1,0);
		v1.pb(0);	
		set<lli> s;

		input(v1,n)
		for(lli i=n-1;i>=1;i--){
			for(lli j=i;j<n;j++){
				if(v1[j]>v1[j+1] && v2[j]==0){
					v2[j]=1;
					swap(v1[j],v1[j+1]);
				}
			}
		}
		for(lli i =1;i<=n;i++){
			cout<<v1[i]<<" ";
		}
		
			

		cout<<endl;
		

	}

	return 0;
}
