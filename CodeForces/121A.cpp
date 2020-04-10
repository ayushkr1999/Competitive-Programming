


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



bool fun(string a){
	lli f=0;
	lli s=0;
	for(auto x: a){
		if(x=='4')f++;
		else s++;
	}
	return f==s?true:false;
}


int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli t,m,o,e,a,k,b,l,r;
	lli x,y,z;
	lli n;
	lli f=0;
	cin>>l>>r;
	lli maxi=2;
	std::vector<lli> v1{0,4,7};
	
	for(lli i=1;v1[i]<1000000000;i++){
		v1.push_back(v1[i]*10+4);
		v1.push_back(v1[i]*10+7);
	}

	// for(auto x: v1){
	// 	cout<<x<<" ";
	// }
	lli sum=0;
	// if(l<=4){
	// 	sum+=(4-l+1)*4;
	// }

	auto lb1= lower_bound(st(v1),r)-v1.begin();
	auto lb2= lower_bound(st(v1),l)-v1.begin();
	lli sub1=v1[lb1]-r;
	lli sub2=v1[lb2]-l+1;

	// cout<<v1[lb1]<<lb1<<endl;	
	
	for(lli i =1;i<=lb1;i++){
		sum+=(v1[i]-v1[i-1])*v1[i];
		// cout<<sum<<" ";

	}

	lli sum2=0;
	for(lli i =1;i<=lb2;i++){
		sum2+=(v1[i]-v1[i-1])*v1[i];
		// cout<<sum<<" ";

	}

	// for(lli i =1;i<=lb2;i++){
	// 	sum-=(v1[i]-v1[i-1])*v1[i];

	// }


	cout<<sum- sub1*v1[lb1]-(sum2-sub2*v1[lb2]);

	return 0;
}
