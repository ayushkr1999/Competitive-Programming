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

bool fun(std::vector<lli> v3,lli n){
	lli c=0;
	
	for(lli i =0;i<=n;i++){
		// cout<<v2[i]-v1[i]<<" ";
		// cout<<i<<" ";
		if(v3[i]<0){
			return false;
		}

		if(v3[i]!=v3[i+1]){
			c++;
		}

		if(c>2){
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
		
		std::vector<lli> v1;
		std::vector<lli> v2;
		
		std::vector<lli> v3;
		
		input(v1,n)
		input(v2,n)
		v3.pb(0);
		for(lli i =0;i<n;i++){
			v3.pb(v2[i]-v1[i]);
		}
		v3.pb(0);


		if(fun(v3,n)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		

		cout<<endl;
		

	}

	return 0;
}
