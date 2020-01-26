#include <iostream>
#include<string>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli t,n,a,b,c;
	// double c;
	cin>>t;
	while(t--){
	cin>>n>>a>>b>>c;
	// maxi=0;
	
	
	vector<lli> v(n);
	for(lli i=0;i<n;i++)cin>>v[i];
	vector<lli> v2(n,0);
	for(lli i=0;i<n;i++){
		v2[i]=abs(v[i]-b);
	}
	for(lli i=0;i<n;i++){
		v[i]=abs(v[i]-a)+c+v2[i];
		
	}
	
	cout<<*min_element(v.begin(), v.end());
	cout<<endl;
	

	}
	
	return 0;
}
