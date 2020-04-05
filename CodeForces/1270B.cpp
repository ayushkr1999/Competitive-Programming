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

lli t,n,m,o,s,e,a,k;
cin>>t;
while(t--){
	// string s;
	lli temp;
	cin>>n;
	// cin>>s;
	lli f=0;
	std::vector<lli> v1(n);
	for (lli i = 0; i < n; ++i)
	{
		cin>>v1[i];
		/* code */
	}
	for(lli i =0;i<n-1;i++){
		if(abs(v1[i]-v1[i+1])>1){
			cout<<"YES"<<endl;
			f=1;
			cout<<i+1<<" "<<i+2<<endl;
			break;
		}
		
	}
	if(!f)
	cout<<"NO"<<endl;
		

	// cout<<1<<" "<<n-1<<endl;	
}

return 0;
}
