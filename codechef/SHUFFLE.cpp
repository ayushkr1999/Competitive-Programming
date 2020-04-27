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
#define itr :: iterator it
#define w(t) cin>>t; while(t --)
#define inputarr(a,n) for(lli i=0;i<n;i++)cin>>a[i];
#define input(a,n) for(lli i=0;i<n;i++){ lli x ; cin>>x; a.push_back(x);}
#define printarr(a,n) for(lli i=0;i<n;i++)cout<<a[i]; cout<<endl;
#define print(vec) for(auto xt : vec)cout<<xt; cout<<endl;
#define printset(st) for(auto xt : st) cout<<xt<<" ";    cout<<endl;


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
 
	lli t,m,o,e,a,k,b,l,r,c,d;
	// lli x,y,z,k,b,j,c,d,m;
	lli n;
	// lli f=0;
		
		
	w(t){

		cin>>n>>k;
		lli v1[n+1];
		std::set<pair<lli,lli>> v2;
		std::vector<bool> bo(n+1,true);
		// for(auto x: bo)cout<<x;
		for(lli i =1;i<=n;i++){
			cin>>v1[i];
			v2.insert({v1[i],i});

		}
		sort(v1+1,v1+n+1);
		while(!v2.empty()){
			lli f=0;
			lli val=v2.begin()->F;
			auto lb=lower_bound(v1+1,v1+n+1,val)-v1;
			auto ub=upper_bound(v1+1,v1+n+1,val)-v1;
			// cout<<lb<<" "<<ub<<endl;
			for(lli i=lb;i<ub;i++){
				if(abs(i-v2.begin()->S)%k==0 && bo[i]==true){
					f=1;
					bo[i]=false;
					v2.erase(v2.begin());
					break;
				}
			}
			if(f==0)break;
		}
		if(!v2.empty()){
			cout<<"no";
		}
		else{
			cout<<"yes";
		}

	

		
		
		

		




		cout<<endl;
		

	}

	return 0;
}
