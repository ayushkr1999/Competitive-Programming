#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	// cin>>n;
	// // while(t--){
	lli ans=0;
	
	cin>>n;
	
	vector<lli> v1(n);
	vector<lli> v2(n);
	
	for(lli i=0;i<n;i++)cin>>v1[i];
	for(lli i=0;i<n;i++)cin>>v2[i];
	vector<lli> v3(n);
	for(lli i=0;i<n;i++){v3[i]=v2[i]-v1[i];}
    // cout<<"fsdfdsf";
	sort(v3.begin(),v3.end());
	for (lli i = 0; i < n; i++)
	{
	  vector<lli>::iterator ptr = v3.begin(); 
      
    
    advance(ptr, i+1); 
		lli x = lower_bound(ptr,v3.end(),-v3[i]) -v3.begin();

		ans+=x-(i+1);
		/* code */
	}
	cout<<ans;
	
	return 0;

}
