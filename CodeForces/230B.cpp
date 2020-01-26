#include <iostream>
#include<string>
#include <bits/stdc++.h>
#define lli long long
using namespace std;

int main() {
	// your code goes here
	lli t,n,l,r,m,k;
	// double c;
	// cin>>n>>k;
	n=1000000;
	vector<bool> v(n+1,true);
	for(lli i=2;i*i<=n;i++){
		if(v[i]==true){
			for(lli j=2*i;j<=n;j=j+i){
				v[j]=false;
			}
		}
	}
	set<double> s1;
	for(lli i=2;i<=n;i++){
		if(v[i]==true){
			// cout<<i<<" ";
			s1.insert(i);
		}
	}
	cin>>n;
	while(n--){
		cin>>k;
		if (s1.find(sqrt(k)) != s1.end()){
			
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}	
