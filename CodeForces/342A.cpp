


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
 
	// lli t,m,o,e,a,k,b,l,r;
	lli x,y,z;
	lli n;
	// lli f=0;
	cin>>n;
	lli maxi=2;
	std::vector<lli> v1;
	input(v1,n)
	sort(st(v1));
	lli tw=count(st(v1),2);
	lli o=count(st(v1),1);
	lli t=count(st(v1),3);
	lli f=count(st(v1),4);
	lli s=count(st(v1),6);
	if(tw+o+t+f+s==n && o==tw+t && o==f+s && ((tw==0 && f==0) || (tw!=0 && f<=tw && t<=s))){
		

		for(lli i=0;i<n/3;i++){
			for(lli j=i;j<n;j+=n/3){
				cout<<v1[j]<<" ";
			}
			cout<<endl;
		}
		
	}
	else{
		cout<<-1;
	}

	return 0;
}
