#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	// cin>>t;
	// while(t--){
	cin>>n;
	
	vector<lli> v1(n);
	
	for(lli i=0;i<n;i++)cin>>v1[i];
	
	
	unordered_map<lli,lli> has;
	for(lli i =0;i<n;i++){
		has[v1[i]]=i;
	}
	
	
	lli maxi=has[n]+1;
	lli mini=has[1]+1;
	// lli mid=(0+n-1)/2;	
	
	
	lli ans = max(max(abs(1-maxi),abs(1-mini)),max((n-maxi),(n-mini)));
	cout<<ans;
	
	
	return 0;
}
