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

// int n, k, m,l,a[200004],i;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli t,m,o,e,a,k,b,l,r;
	// lli x,y,z,k,b,j,c,d,m;
	lli n;
	
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>v1[i];
		for(int i=1;i<=n;i++)
			cin>>v2[i];
		sort(v1+1, v1+n+1);
		sort(v2+1, v2+n+1);
		reverse(v1+1, v1+n+1);
		reverse(v2+1, v2+n+1);
		lli player=0 , move=0, i=1,j=1,asum=0,bsum=0;
		while(move<2*n){
			move++;
			if(!player){
				if(v1[i]>=v2[j]){
					asum+=v1[i];
					i++;
				}
				else{
					j++;
				}
			}
			else{
				if(v2[j]>=v1[i]){

					bsum+=v2[j];
					j++;
				}
				else{
					i++;	
				}	
			}
			player^=1;
		}		
		cout<<asum-bsum;
		
	

	return 0;
}
