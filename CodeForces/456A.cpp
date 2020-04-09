#include <iostream>
#include <bits/stdc++.h>
#define lli long long int 
// #define lli double
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
	cin>>n;
	

	vector<pair<lli,lli>> v1;
	for(lli i =0;i<n;i++){
		cin>>a>>b;
		v1.push_back(make_pair(a,b));
	}
	sort(v1.begin(),v1.end());
	for(lli i =1;i<n;i++){
		if(v1[i].second<v1[i-1].second){
			f=1;
			break;
		}
	}
	cout<<(f==1?"Happy Alex":"Poor Alex");

	return 0;
}
