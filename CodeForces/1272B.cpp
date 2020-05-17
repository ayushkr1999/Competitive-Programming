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
	#define mp make_pair
	#define loop(n) for (lli i = 0; i < n; i++)
	#define FOR(i,a,b) for (lli i = a; i < b; i+=1)
	#define st(v) v.begin(),v.end()
	#define F first
	#define S second
	#define mp make_pair
	#define itr :: iterator it
	#define w(t) cin>>t; while(t --)
	#define inputarr(a,n) for(lli i=0;i<n;i++)cin>>a[i];
	#define input(a,n) for(lli i=0;i<n;i++){ lli x ; cin>>x; a.push_back(x);}
	#define printarr(a,n) for(lli i=0;i<n;i++)cout<<a[i]; cout<<endl;
	#define print(vec) for(auto xt : vec)cout<<xt; cout<<endl;
	#define printset(st) for(auto xt : st) cout<<xt<<" ";    cout<<endl;
	#include <ext/pb_ds/assoc_container.hpp> 
	#include <ext/pb_ds/tree_policy.hpp> 
	using namespace __gnu_pbds; 
	// typedef tree<int,null_type,less<int>,rb_tree_tag,
	// tree_order_statistics_node_update> indexed_set;
	typedef tree<int, null_type, less_equal<int>, 
	             rb_tree_tag, 
	             tree_order_statistics_node_update> 
	    ordered_set; 
	 
	 
	lli v1[N], v2[N];
	// lli ans[N], a[N];

		

	 
	// int n, k, m,l,a[200004],i;
	int32_t main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	 
		lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
		// lli x,y,z,k,b,j,c,d,m;
		
		w(t){

		lli n;
		string s;

		// cin>>s;
		// cin>>k;
		// cin>>n;
		lli ans=0;
		// lli v1[n];
		cin>>s;

		std::map<char, lli> has;

		for(lli i=0;i<s.size();i++){
			has[s[i]]++;
		}
		lli c1=min(has['L'],has['R']);
		lli c2=min(has['U'],has['D']);
		// cout<<c1<<" "<<c2;
		if(min(c1,c2)==0){
			if(c1==0){
				c2=min(1ll,c2);
				cout<<2*c2<<endl;
				cout<<string(c2,'U')<<string(c2,'D');
			}
			else{
				c1=min(1ll,c1);
				cout<<2*c1<<endl;
				cout<<string(c1,'L')<<string(c1,'R');
			}
		}
		else{

			cout<<2*(c2+c1)<<endl;
			for(lli i =0;i<c1;i++){
				cout<<"L";
			}
			for(lli i =0;i<c2;i++){
				cout<<"U";
			}
			for(lli i =0;i<c1;i++){
				cout<<"R";
			}
			for(lli i =0;i<c2;i++){
				cout<<"D";
			}
		}

		


	      
		

		// cout<<ans;
		cout<<endl;

	 
		}

		return 0;
		
		
		
		
	}
