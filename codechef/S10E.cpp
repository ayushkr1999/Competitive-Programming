#include<bits/stdc++.h>
#include<iostream>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli t,n,s,l,mini,f;
	cin>>t;
	while(t--){
		cin>>n;
		mini=0;
		
		vector<lli> v1(n);
		for(lli i =0;i<n;i++)cin>>v1[i];
		for(lli i =0;i<n;i++){
			f=0;
			for(lli j=i-5 ;j<i ;j++){
				if(j>=0 && v1[j]<=v1[i]){
					f=1;
					break;
				}
			}
			if(f!=1){
				mini++;
			}
		}
		
		cout<<mini<<endl;
	}
	return 0;
}
