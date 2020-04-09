


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
#define loop(i,n) for (lli i = 0; i < n; i++)

#define FOR(i,a,b) for (lli i = a; i < b; i+=1)


#define st(v) v.begin(),v.end()

#define pii pair<int,int>
#define F first
#define S second

#define mii map<lli,lli>
#define vec vector<lli>
#define seti set<lli>

#define itr :: iterator it
#define w(t) cin>>t; while(t --)



#define scanarr(a,n) for(lli i=0;i<n;i++)cin>>a[i];
#define scanvector(a,n) for(lli i=0;i<n;i++){ lli x ; cin>>x; a.push_back(x);}

#define printarr(a,n) for(lli i=0;i<n;i++)cout<<a[i]; cout<<endl;
#define printvector(vec) for(auto xt : vec)cout<<xt; cout<<endl;
#define printset(st) for(auto xt : st) cout<<xt<<" ";    cout<<endl;

bool fun(std::vector<lli> a,std::vector<lli> b,lli n){
	std::vector<lli> v1(n,0);
	std::vector<lli> v2(n,0);
	for(lli i=1;i<n;i++){
		if(a[i-1]==1 || v1[i-1]==1)v1[i]=1;
	}
	for(lli i=1;i<n;i++){
		if(a[i-1]==-1 || v2[i-1]==-1)v2[i]=-1;
	}
	for(lli i=1;i<n;i++){
		if(a[i]<b[i]){
			if(v1[i]!=1){
				return false;
			}

		}
		if(a[i]>b[i]){
			if(v2[i] >=0){
				return false;
			}
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
 
	lli t,m,o,e,a,k,b;
	lli x,y,z;
	lli n;
	lli f=0;
	w(t){
		lli n,m;
	    cin>>n;
	    // lli a[n];
	    // lli b[n];
	    std::vector<lli> a;
	    std::vector<lli> b;
	    scanvector(a,n);
	    scanvector(b,n);
	    if(a[0]!=b[0]){
	    	cout<<"NO"<<endl;
	    	continue;
	    }
	    
	    if(fun(a,b,n))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}

	
	return 0;
}
