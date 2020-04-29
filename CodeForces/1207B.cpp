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
	

		cin>>n>>m;
		lli v1[n][m];
		std::vector<pair<lli,lli>> v2;

		for(lli i=0;i<n;i++){
			for(lli j=0;j<m;j++){
				cin>>a;
				v1[i][j]=a;

			}
		}

		for(lli i=0;i<n-1;i++){
			for(lli j=0;j<m-1;j++){
				
				if(v1[i][j]*v1[i+1][j]*v1[i][j+1]*v1[i+1][j+1]>0){
					v1[i][j]=2;
					v1[i+1][j]=2;
					v1[i][j+1]=2;
					v1[i+1][j+1]=2;
					v2.pb({i,j});
				}

			}
		}
		c=0;
		for(lli i =0;i<n;i++){
			for(lli j=0;j<m;j++){
				if(v1[i][j]==1){
					c++;
				}
			}
		}
		if(c!=0){
			cout<<-1;
		}
		else{
			cout<<v2.size()<<endl;
			for(auto x:v2){
				cout<<x.F+1<<" "<<x.S+1<<endl;
			}
		}


		


	return 0;
}
