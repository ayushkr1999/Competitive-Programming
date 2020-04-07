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

	lli t,m,o,s,e,a,k,b;
	lli x,y,z;
	lli n;
	cin>>n;
	// cin>>t;
	lli f=0;
	std::vector<lli> v1{4,7,
						44,47,74,77,
						444,447,474,477,744,747,774,777};
	for(lli i =0;i<v1.size();i++){
		if(n%v1[i]==0){
			f=1;
			break;
		}
	}
	cout<<(f==1?"YES":"NO");
	return 0;
	
	}
