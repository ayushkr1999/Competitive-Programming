#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define N 100005
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


lli n;
lli v1[N], v2[N];
bool ok(string s){
	lli mask=0;
	
	for(lli i =0;i<s.size();i++){
	if(isupper(s[i])) mask |=1;

	if(isdigit(s[i]))mask |=2;

	if(islower(s[i]))mask |=4;

	}
	return mask==7;

}


// int n, k, m,l,a[200004],i;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli t,m,o,e,a,k,b,l,r,c;
	// lli x,y,z,k,b,j,c,d,m;
	lli n;
	// lli f=0;
		
		
	// w(t){

		cin>>n;
		lli ans=0;
		std::vector<pair<lli,lli>> v2;
		std::vector<pair<lli,lli>> v3;
		for(lli i =0;i<n;i++){
			cin>>a>>b;
			v2.pb(make_pair(b,a));

		}

		sort(st(v2));
		reverse(st(v2));
	
		c=1;
		for(lli i =0;i<n;i++){
			if(v2[i].F>0){
				ans+=v2[i].S;
				c+=v2[i].F;
				c--;
			}
			if(v2[i].F==0){
				v3.pb(make_pair(v2[i].S,v2[i].F));
			}
		}
		sort(st(v3));
		reverse(st(v3));
		
		for(lli i =0;i<v3.size()&&c>0;i++){
			ans+=v3[i].F;
			c--;
		}
		cout<<ans;




	return 0;
}