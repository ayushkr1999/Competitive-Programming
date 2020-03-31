#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
		lli a;
		lli b;
		cin>>a>>b;
		if(a%b==0){
			cout<<0<<endl;
		}
		else{
			cout<<(a/b+1)*b-a<<endl;
		}
		
		
	}
	return 0;
}
