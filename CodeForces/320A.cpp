#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
bool fun(string s){
	for(lli i =0;i<s.size();i++){
		if(s[i]!='1' && s[i]!='4')
			return false;
	}

	if(s[0]!='1')
		return false;

	if(s.find("444") != s.npos)
		return false;
	
	return true;
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
	lli f;
	// cin>>n>>m;
	string s;
	cin>>s;
	cout<<(fun(s)?"YES":"NO");
	return 0;
}
