#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli fact(lli n){

	return n*(n+1)/2;

}
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
	cin>>n>>k;
	lli fac= fact(n);
	lli mod = k%fac;
	// cout<<mod<<endl;
	lli i =0;
	while(1){
		if(mod-i>=0)
			mod-=i;
		
		else{ 
			cout<<mod;
			break;
			}

		i++;

	}

	return 0;
}
