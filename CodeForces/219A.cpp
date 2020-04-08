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
	lli f=0;
	cin>>k;
	string s;
	cin>>s;
	unordered_map<char,lli> has;
	for(lli i =0;i<s.size();i++){
		has[s[i]]++;
	}
	for(auto x: has){
		if(x.second%k!=0){
			f=1;
			break;
		}
	}
	if(f){
		cout<<-1;
	}
	else{
		// cout<<2;
		string t;
		for(auto x:has){
			for(lli i =0;i<x.second/k;i++){
				t+=x.first;
			}
		}
		string g;
		for(lli i =0;i<k;i++){
			g+=t;
		}
		cout<<g;
	}
	return 0;
}
