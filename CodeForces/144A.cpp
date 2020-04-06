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
lli x,y,z;

cin>>n;

	x=0;
	y=0;

	vector<lli> v1(n);
	for (lli i = 0; i < n; ++i)cin>>v1[i];
	auto min=*min_element(v1.begin(),v1.end());
	for(lli i =0;i<n;i++){
		if(v1[i]==min)x=i;
	}
	auto maxi=*max_element(v1.begin(),v1.end());
	for(lli i =0;i<n;i++){
		if(v1[i]==maxi){
			y=i;
			break;
		}
	}
	
	if(x>y)cout<<n-1-x+y;

	else cout<<n-1-x+y-1;
    


return 0;
}
