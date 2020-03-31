#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		s="0"+s+"?";
		lli l=0;
		lli r=0;
		lli diff=0;
		
		while(r<s.size()){
			if(s[r]=='R' || s[r]=='?'){
				diff=max(diff,r-l);
				l=r;
				
			}
			r++;
		}
		cout<<diff<<endl;

		
	}
	return 0;
}
