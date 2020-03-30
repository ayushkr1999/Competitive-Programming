#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,maxi,k;
	// cin>>t;
	// while(t--){
	cin>>n>>k;
	
	vector<lli> v1(n);
	vector<lli> v2(n);
	for(lli i=0;i<n;i++)cin>>v1[i];
	for(lli i=0;i<n;i++)v2[i]=v1[i];
	sort(v1.begin(),v1.end());
	vector<lli> v3;
	maxi=0;
	unordered_map<lli,lli> has;
	for(lli i =0;i<n;i++){
		has[v2[i]]=i;
	}
	for(lli i=n-1;i>n-1-k;i--){
		// cout<<v1[i]<<" "<<v2[i]<<endl;
		v3.push_back(has[v1[i]]); 
		maxi+=v1[i];
	}
	
	// for(lli i=0;i<n;i++){
	// 	v1[i]=v1[i]-v2[i];
	// }
	lli x=1;
	sort(v3.begin(),v3.end());
	for(lli i =v3.size()-1;i>0;i--){
		x=x*(v3[i]-v3[i-1])%998244353 ;
		// cout<<x<<" ";
	}
	cout<<maxi<<" "<<x<<endl;
	// for(auto x:v3){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	// for(aut	o x:v2){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
		
	// }
	return 0;
}
