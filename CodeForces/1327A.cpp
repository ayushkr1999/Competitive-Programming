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

	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
		// string s;
		lli temp;
		cin>>n>>k;
		// cin>>s;
		
		if(n>=k*k){
			if(n&1 && k&1)
				cout<<"YES";
			if(n&1 && !(k&1))
				cout<<"NO";
			if(!(n&1) && k&1)
				cout<<"NO";
			if(!(n&1) && !(k&1))
				cout<<"YES";
		
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
			// for(auto x:v2)cout<<x;

		// cout<<1<<" "<<n-1<<endl;	
	}
	
	return 0;
}
