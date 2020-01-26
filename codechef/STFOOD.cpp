#include <iostream>
#include<string>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli t,s,p,d,n,maxi;
	// double c;
	cin>>t;
	while(t--){
	cin>>n;
	maxi=0;
	while(n--){
		cin>>s>>p>>d;
		maxi=max(maxi,((p/(s+1))*d));
	}
	
	
	cout<<maxi<<endl;
	}
	
	return 0;
}
