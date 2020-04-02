#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
	// lli ans=0;
	lli l,r,u,d,x,y,xl,xr,yd,yu;
	// cin>>n;
	lli f=0;
	cin>>l>>r>>d>>u;
	cin>>x>>y>>xl>>yd>>xr>>yu;	
	if(l-r>x-xl || r-l>xr-x)f=1;

	if(u-d>yu-y || d-u>y-yd)f=1;

	if(xl==xr && (l+r)>0)f=1;

	if(yd==yu && (d+u)>0)f=1;

	cout<<(f==1?"NO":"YES")<<endl;

	}
	return 0;

}
