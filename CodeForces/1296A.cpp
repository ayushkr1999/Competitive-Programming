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
	cin>>n;
	// cin>>s;
	std::vector<lli> v1(n);
	lli e=0;
	lli o=0;
	lli f=0;
	for (lli i = 0; i < n; ++i)
	{
		cin>>a;
		if(a&1)o++;
		else e++;
		/* code */
	}
	if(n&1){
		if(o>=1)f=1;
	
	}	
	else{
		if(o>=1 && o<n)f=1;
	}
	cout<<(f==1?"YES":"NO")<<endl;
		// for(auto x:v2)cout<<x;

	// cout<<1<<" "<<n-1<<endl;	
}

return 0;
}
