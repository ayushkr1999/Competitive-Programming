#include <iostream>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;
 
int main() {
	// your code goes here
	lli n,k,t,a,b,mini,l,r,maxi,temp;
	cin>>n>>k;
	// cout<<maxi;
	maxi=0;
	vector<lli> v1(n);
	for(lli i =0;i<n;i++)cin>>v1[i];
	if (k>=n){
		cout<<v1[n-1];
		
	}
	else{
		maxi=v1[n-1];
		for(lli i=0;i<n-k;i++){
			maxi = max(maxi,v1[i]+v1[n- (2*k-n)-1-i]);
		}
		cout<<maxi;
	}
	
	
	return 0;
}
