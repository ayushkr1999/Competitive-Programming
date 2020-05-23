#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 1000005
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
 
 
lli v1[N], v2[N], v3[N];
// std::vector<lli> v1[N];
// lli v2[N];
// lli ans[N], a[N];
// lli maxi=0;

// lli sqr(lli a)return a*a;

 
// int n, k, m,l,a[200004],i;
// string s;
lli A,R,M,n;
lli count (lli x){
    lli d=0,u=0,ans=0;
    for(lli i=1;i<=n;i++) 
        v1[i]>=x ? u+=v1[i]-x : d+=x-v1[i];
    if(d>u) 
        ans+=(d-u)*A;
    if(u>d) 
        ans+=(u-d)*R;
    ans+=min(d,u)*min(A+R,M);
    return ans;
}


lli ternary(lli r){
    lli l = *min_element(v1+1,v1+n+1);
    while(l<=r){
        lli ml = ( l + (r - l) / 3), mr = (r - (r - l) / 3);
        //printf("%d %d %d %d\n",l,r,ml,mr);
        
        // cout<<l<<" "<<ml<<" "<<mr<<" "<<r<<endl;
        if (count(mr)<count(ml))
            l = ml+1;
        else r = mr-1;
    }
    return count(l);
}

int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
	// lli x,y,z,k,b,j,c,d,m;
	fastIO

	// w(t){
	// map<int,vector<lli>> has;
	// lli ans[1005];
	// cin>>n;

    cin>>n>>A>>R>>M;
    for (lli i=1;i<=n;i++)
        cin>>v1[i];
    


    cout<<ternary(*max_element(v1+1,v1+n+1));


	

	



		// cout<<endl;
		// ans=-1;

		


		// cout<<ans<<endl;
		// cout<<endl;

		
		


	
	// }

	return 0;

}
