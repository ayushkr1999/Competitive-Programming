#include <iostream>
#include <bits/stdc++.h>
// #define lli long long int 
#define lli double
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
	lli f=0;
	cin>>n>>x>>y;
	
	if(ceil(y*n/100) >x){
		cout<<ceil(y*n/100)-x;
	}
	else{
		cout<<0;
	}
	return 0;
}
