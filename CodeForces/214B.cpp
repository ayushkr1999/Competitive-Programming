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


// lli v1[N], v2[N];
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
	// lli f=0;
		
		
	// w(t){

		cin>>n;
		lli f=0;
		// lli v1[n][m];
		std::vector<int> v2;
		std::vector<int> v3;
		lli sum=0;
		// std::vector<lli> v1;
		std::vector<int> v1(n);
		for(lli i=0;i<n;i++){
				
				cin>>v1[i];
				sum+=v1[i];
				if(v1[i]==0){
					f=1;
				}
			
		}
		if(f==0){
			cout<<-1;
		}
		else{


			sort(st(v1));
			reverse(st(v1));
			lli mod1= sum%3;
			

			if(mod1){

				for(lli i =0;i<n;i++){
					if(v1[i]%3==mod1 ){
						v2.pb(v1[i]);
					}

					if(v1[i]%3!=0 && v1[i]%3!=mod1){
						v3.pb(v1[i]);
					}
				}
				reverse(st(v1));
				if(!v2.empty()){
					auto lb= lower_bound(st(v1),v2[v2.size()-1]);
					v1.erase(lb);
				}
				else if(v3.size()>=2){
					auto lb1= lower_bound(st(v1),v3[v3.size()-1]);
					v1.erase(lb1);
					auto lb2= lower_bound(st(v1),v3[v3.size()-2]);
					v1.erase(lb2);
				}
				else{
					cout<<-1;
					return 0;
				}
				reverse(st(v1));	



			}
			if(v1[0]==0){
				cout<<0;
				return 0;
			}

			for(auto x: v1){
				cout<<x<<""; 
			}


		}




	return 0;
}

