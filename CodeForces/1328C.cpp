#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
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
#define FOR(a,b) for (lli i = a; i < b; i+=1)
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
 
 
lli v1[N], v2[N], v3[N];
// lli ans[N], a[N];

	

 
// int n, k, m,l,a[200004],i;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
	// lli x,y,z,k,b,j,c,d,m;
	fastIO
	w(t){

		lli n;
		string s;
		f=0;
		cin>>n;
		cin>>s;
		string s1="";
		string s2="";
		f=0;
		if(s[0]=='1'){
			s1+='2',s2+='2';
			FOR(1,n){
				if(s[i]=='0'){
					s1+='0', s2+='0';
				}
				if(s[i]=='1' && f==0){
					s1+='0', s2+='1';
					f=1;
					continue;
				}
				if(s[i]=='1' && f==1){
					s1+='1', s2+='0';
				}
				if(s[i]=='2' && f==1){
					s1+='2', s2+='0';
				}
				if(s[i]=='2' && f==0){
					s1+='0' , s2+='2';
					f=1;
					continue;
				}
			}
			

		}
		
		if(s[0]=='2'){
			s1+='1',s2+='1';
			FOR(1,n){
				if(s[i]=='0'){
					s1+='0', s2+='0';
				}
				if(s[i]=='1' && f==0){
					s1+='0', s2+='1';
					f=1;
					continue;
				}
				if(s[i]=='1' && f==1){
					s1+='1', s2+='0';
				}
				if(s[i]=='2' && f==1){
					s1+='2', s2+='0';
				}
				if(s[i]=='2' && f==0){
					s1+='1' , s2+='1';
					// f=1;
					// continue;
				}
			}
		}

		if(s[0]=='0'){
			s1+='2',s2+='1';
			FOR(1,n){
				if(s[i]=='0'){
					s1+='0', s2+='0';
				}
				if(s[i]=='1'){
					s1+='0', s2+='1';
				}
				if(s[i]=='2'){
					s1+='0' , s2+='2';
				}
			}
		}
		


		cout<<s1<<endl<<s2<<endl;
		// cout<<v1[0];
		






		 
	}

	return 0;
	
	
	
	
}
