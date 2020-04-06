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

	
	string st,tt,bt;
	
	cin>>st;
	cin>>tt;

	for(lli i =0;i<st.size();i++){
		bt+= st[i]==tt[i]?'0':'1';
	}
	
	cout<<bt;
    

return 0;
}
