#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
#define N 2000005
// #define N 1000000000+5
#define ll long long
#define ld long double
#define lli int	
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
 
 
lli v1[N],  v3[N];
// std::vector<lli> v1[N];
// lli v2[N];
// lli ans[N], a[N];
// lli maxi=0;

lli sqr(lli a){
	return a*a;
}

 
// int n, k, m,l,a[200004],i;
// string s;
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

// int gcd(int a, int b, int &x, int &y) 
// {  
//     int xx = y = 0;
//     int yy = x = 1;
//     while (b) 
//     {
//         int q = a/b;
//         int t = b; b = a%b; a = t;
//         t = xx; xx = x-q*xx; x = t;
//         t = yy; yy = y-q*yy; y = t;
//     } 
//     return a;
// }

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g !=0) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;

    // cout<<x0<<" "<<y0<<endl;

    double t1 = ceil((-1.0 * x0 * g)/b);
    double t2 = floor((1.0 * y0 * g)/a);
      
    if (t2 >= t1)
        return true;
    else
       	return false;
    
}

lli A,R,M,n,ans,k;
lli a,b,x,y,m;
string s;
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	// lli m,o,e,k,b,l,c,d,x,y,f,t,r,a;
	// lli x,y,z,k,b,j,c,d,m;
	fastIO
	lli t,l,r,f,g;
	w(t){

	lli c;

	cin>>k>>x;
	
	// for(lli i =1;i<100;i++){
	// 	cout<<(i-1)%9+1<<" ";
	// }
	cout<<(k-1)*9+x<<endl;

	}
	return 0;
	

}
