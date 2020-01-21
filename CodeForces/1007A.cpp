#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,c,maxi;
	cin>>n;
	
	vector<lli> v(n);
	for(lli i=0;i<n;i++)cin>>v[i];
	c=1;
	maxi=0;
	sort(v.begin(),v.end());
	for(lli i=1;i<n;i++){
		
		if(v[i]==v[i-1]){
			c++;
		}
		else{
			c=1;
		}
		maxi =max(maxi,c);
	}
	
	cout<<n-max(maxi,c);
	return 0;
}
