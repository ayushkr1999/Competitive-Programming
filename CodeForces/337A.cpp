#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli fact(lli n){
 
	return n*(n+1)/2;
 
}
int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
 
	lli t,m,o,e,a,k,b;
	lli x,y,z;
	lli n;
	lli f=0;
	cin>>n>>m;
	string s;
	std::vector<lli> v1(m);
	for(lli i =0;i<m;i++)cin>>v1[i];
	sort(v1.begin(),v1.end());
	lli maxi=1004;
	
	for(lli i=0;i+n<=m;i++){
		maxi=min(maxi,v1[i+n-1]-v1[i]);
	}
	cout<<maxi;
	return 0;
}
