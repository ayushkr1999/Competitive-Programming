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
	lli x,y,z,k,a,b,c,d,m;
	lli n;
	// lli f=0;
	
	// cin>>n;
	
	// w(t){
		// cin>>n;
		// cout<<n
		lli f=0;
		lli g=0;
		// lli s=0;
		string s;
		cin>>s;
		// for(auto x: s){
		// 	cout<<x<<" ";
		// }
		n=s.size();
		for(lli i=0;i<n;i++){
			if((s[i]-48)%2==0)f=1;
				// cout<<s[i]-48;
		}
		// reverse(st(s));
		if(f==1){
			g=0;
			for(lli i =0;i<n;i++){
				if((s[i]-48)%2==0 && s[i]-48<=s[n-1]-48){
					swap(s[i],s[n-1]);
					g=1;
					break;
				}

			}
			if(g==1){
				cout<<s;
			}
			else{
				reverse(st(s));
				for(lli i =0;i<n;i++){
					if((s[i]-48)%2==0){
						swap(s[i],s[0]);
						break;
					}
				}
				reverse(st(s));
				cout<<s;
			}


		}
		else{
			cout<<-1;
		}
		// cout<<endl;
		

	// }

	return 0;
}
