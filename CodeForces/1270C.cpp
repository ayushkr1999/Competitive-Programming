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
		
	}
  
  //code 
	lli sum=0;
	lli xo=0;
	for(lli i =0;i<n;i++){
		sum+=v1[i];
		xo^=v1[i];
		
	}
	
	//sum + sum + xo +xo =2(sum+xo)
	//xo ^ sum ^ xo ^ xo = sum ^ xo
	
	cout<<2<<endl<<xo<<' '<<sum + xo<<endl; //this works perfectly fine
		
	
	// i dont know why this  isn't working 
	// probably some error in test cases

	// cout<<1<<endl<<2*xo + sum<<endl;	
}

return 0;
}
