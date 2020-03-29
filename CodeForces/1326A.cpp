#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,maxi;
	// cin>>t;
	// while(t--){
	cin>>n;
	
	vector<lli> v1(n);
	for(lli i=0;i<n;i++)cin>>v1[i];
	vector<lli> v2(n,0);
	maxi=0;
	for(lli i=0;i<n;i++){
		
		v2[i]=maxi+v1[i];
		maxi=max(maxi,maxi+v1[i]);
	}
	// for(lli i=0;i<n;i++){
	// 	v1[i]=v1[i]-v2[i];
	// }
	// for(auto x:v1){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	for(auto x:v2){
		cout<<x<<" ";
	}
	// cout<<endl;
		
	// }
	return 0;
}
