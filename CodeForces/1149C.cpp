#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define N 100005
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


// lli v1[N], v2[N];
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
		


		cin>>n;
		
		map<lli,lli> has;
		for(lli i =0;i<n;i++){
			cin>>a;
			has[a]++;
		}
		if(has.size()==1){
			for(auto x:has){
				for(lli i =0;i<x.S;i++){
					cout<<x.F<<" ";
				}
			}
		}
		else{
			cout<<2<<" "<<1<<" ";
			has[2]--;
			has[1]--;
			for(lli i=0;i<has[2];i++){
				cout<<2<<" ";
			}
			for(lli i=0;i<has[1];i++){
				cout<<1<<" ";
			}
	

	return 0;
}
