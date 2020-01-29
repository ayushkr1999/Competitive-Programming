#include <iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,k,t,a,c,b,mini,l,r,maxi,temp,sum1,sum2;
	cin>>n;
	c=0;
	sum1=0;
	sum2=0;
	// cout<<maxi;
	maxi=0;
	vector<lli> v1;
	for (int i = 0; i < n; ++i) {
        cin >> temp;
        v1.push_back(temp);
    }
	// sort(v1.begin(),v1.end());
	
	l=0;
	r=v1.size()-1;
	sum1=v1[l];
	sum2=v1[r];
	while(l<r){
		// cout<<v1[l]<<" "<<v1[r]<<" "<<maxi<<endl;
		
		
		if(sum1<sum2){
			l++;
			sum1+=v1[l];
			
			
		}	
		else if(sum1>sum2){
			r--;
			sum2+=v1[r];
			
			
		}
		else if(sum1==sum2){
			
			maxi=max(maxi,sum1);
			l++;
			r--;
			sum2+=v1[r];
			sum1+=v1[l];
			
		}
	}
	cout<<maxi;
	
	
	return 0;
}
