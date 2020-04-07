#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	lli t,m,o,e,a,k,b;
	lli x,y,z;
	lli n;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		// cin>>t;
		if(s.size()>10){
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}

	return 0;
}
