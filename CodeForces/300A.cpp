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

	lli f=0;

	lli g=0;
	cin>>n;
	std::vector<lli> v1;
	std::vector<lli> v2;
	std::vector<lli> v3;
	lli prod=1;
	for(lli i =0;i<n;i++){
		cin>>a;
		if(a>0)
			v1.push_back(a);
		if(a==0)
			v3.push_back(a);
		if(a<0)
			v2.push_back(a);
	}
	if(v2.size()%2==0){
		x=v2[0];
		//remeve it
		v2.erase(v2.begin());
		v3.push_back(x);
	}
	if(v1.size()==0){
		v1.push_back(v2[0]);
		v1.push_back(v2[1]);
		v2.erase(v2.begin(),v2.begin()+2);
		
	}
	
	cout<<v2.size()<<" ";
	for(lli i=0;i<v2.size();i++)cout<<v2[i]<<" ";
	cout<<endl;
	cout<<v1.size()<<" ";
	for(lli i=0;i<v1.size();i++)cout<<v1[i]<<" ";
	cout<<endl;
	cout<<v3.size()<<" ";
	for(lli i=0;i<v3.size();i++)cout<<v3[i]<<" ";
	cout<<endl;
			


	return 0;
	
	}
