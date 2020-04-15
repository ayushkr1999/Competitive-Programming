#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


#define ll long long
#define ld long double
#define lli long int
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




int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	// lli t,m,o,e,a,k,b,l,r;
	lli x,y,z,k,a,b;
	lli n,t;
	// lli f=0;
	
	// cin>>n;
	
	w(t){
		// cin>>n;
		// cout<<n
		std::vector<vector<lli>> a(9);
		for(lli i =0;i<9;i++){
			string s;
			cin>>s;
			for(lli j=0;j<9;j++)a[i].pb((s[j]-48));
		}

		
		lli c=0;

		for(lli i =0;i<3;i++){
			a[i][c]=a[i][(c+1)%9];
			
			c+=3;
		}
		c=1;
		for(lli i =3;i<6;i++){
			a[i][c]=a[i][(c+1)%9];
			
			c+=3;
		}
		c=2;
		for(lli i =6;i<9;i++){
			a[i][c]=a[i][(c+1)%9];
			
			c+=3;
		}

		for(lli i =0;i<9;i++){
			for(lli j=0;j<9;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
		// cout<<maxi;
		cout<<endl;
		

	}

	return 0;
}
