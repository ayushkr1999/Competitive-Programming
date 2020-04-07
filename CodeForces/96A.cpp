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

	lli t,m,o,e,a,k,b;
	lli x,y,z;
	lli n;
	string s;
	cin>>s;
	// cin>>t;
	lli c=0;
	lli d=0;
	lli maxi0=0;
	lli maxi1=0;
	for(lli i=0;i<s.size();i++){
		if(s[i]=='0'){
			c++;
			d=0;
		}
		else{
			c=0;
			d++;
		}
		maxi0=max(maxi0,c);
		maxi1=max(maxi1,d);
	}
	if(maxi1>=7 || maxi0>=7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	}
