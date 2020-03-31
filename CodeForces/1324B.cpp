#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
		cin>>n;
		lli f=0;
		vector<lli> v1(n);
		
		for(lli i=0;i<n;i++)cin>>v1[i];
		for(lli i=0;i<n-2;i++){
			for(lli j=i+2;j<n;j++){
				if(v1[i]==v1[j]){
					f=1;
					// cout<<"YEs";
					break;
				}
			}
			// cout<<endl;
			if(f==1)break;
		}
		
		
		
	
		cout<<(f==1?"YES":"NO")<<endl;;
		

		
	}
	return 0;
}
