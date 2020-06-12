#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 1000005
// #define N 1000000000+5
#define ll long long
#define ld long double
#define lli long long 
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
 
 
// lli v1[N],  v3[N];
// std::vector<lli> v1[N];
// lli v2[N];
// lli ans[N], a[N];
// lli maxi=0;

lli sqr(lli a){
    return a*a;
}

 
// int n, k, m,l,a[200004],i;
// string s;

set<lli> s1;
void seive(lli n,vector<lli> &primes){
    bool isprime[n+1];
    memset(isprime,true,n+1);

    for(lli i =2;i*i<=n;i++){
        if(isprime[i]==true){

            for(lli j=i*i;j<=n ;j+=i)
                isprime[j]=false;
        }
    }
    for(lli i =2;i<=n;i++){
        if(isprime[i]){
            primes.pb(i);
        }
    }
}

lli A,R,M,n,ans,k;
lli a,b,x,y,m,c;
string s;



int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
    // lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
    // lli x,y,z,k,b,j,c,d,m;
    
    lli t,l,r,f,g;

 		cin>>n>>k;

 		cout<< min(n-k,k-1)+n-1+2*n+1;

    return 0;
    

}
