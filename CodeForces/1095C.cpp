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
		cin>>n>>k;
		map<lli,lli> has;
		// std::vector<lli> v2;
		queue<lli> v2;
		for(lli i =0;i<=30;i++){
			if(n & (1<<i)){
				has[1<<i]++;
				if(i>0)
					v2.push(1<<i);

			}
		}

		lli cnt=has.size();
		if(cnt>k){
			cout<<"NO";
		}
		else{
			while(!v2.empty() && cnt<k){
				a=v2.front();
				v2.pop();
				has[a]--;
				has[a/2]+=2;
				if(a/2>1){
					v2.push(a/2);
					v2.push(a/2);
				}
				cnt++;
			}
			if(cnt<k){
				cout<<"NO";
			}
			else{
				cout<<"YES"<<endl;
				for(auto x:has){
					for(lli i=0;i<x.S;i++){
						cout<<x.F<<" ";
					}
				}
			}		
		}

	

	return 0;
}
