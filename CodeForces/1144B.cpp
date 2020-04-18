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


bool ispal(string t){
	lli l=0;
	lli r=t.size()-1;
	while(l<t.size()/2){
		if(t[l]!=t[r]){
			return false;
		}
		l++;
		r--;
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

		cin>>n;
		std::vector<lli> v1;
		input(v1,n)
		lli o=0;
		lli e=0;
		lli sum=0;
		lli sum1=0;
		std::vector<lli> v2;
		std::vector<lli> v3;
		for(lli i =0;i<n;i++){
			sum1+=v1[i];
			if(v1[i]&1){
				v2.pb(v1[i]);
			}
			else{
				v3.pb(v1[i]);
			}
		}

		sort(st(v2));
		sort(st(v3));
		reverse(st(v2));
		reverse(st(v3));
		if(v2.size()==v3.size()){
			cout<<0;
		}
		else if(v2.size()>v3.size()){
			for(lli i =0;i<v3.size();i++){
				sum+=v3[i];
			}
			for(lli i =0;i<v3.size()+1;i++){
				sum+=v2[i];
			}
			cout<<sum1-sum;
		}
		else{
			for(lli i =0;i<v2.size();i++){
				sum+=v2[i];
			}
			for(lli i =0;i<v2.size()+1;i++){
				sum+=v3[i];
			}
			cout<<sum1-sum;
		}



	return 0;
}
