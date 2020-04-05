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
lli s1=0;
lli s2=0;
lli s3=0;
while(t--){
	// string s;
	lli x,y,z;
	cin>>x>>y>>z;

	s1+=x;
	s2+=y;
	s3+=z;	
}

cout<<(s1 ==0 && (s1==s2 && s1==s3)?"YES":"NO");
return 0;
}
