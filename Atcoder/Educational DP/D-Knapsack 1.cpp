#include <iostream>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,t,w;
	// maxi=0;
	cin>>n>>w;
	t=n;
	vector <lli> dp(w+1,0);
	
	while(t--){
		lli weight,value;
		
		
		cin>>weight>>value;	
		for(lli  i=w-weight;i>=0;i--){
			dp[i+weight]=max(dp[i+weight],dp[i]+value);
		
		// for(auto x: dp){
		// 	cout<<x<<" ";
			
		// }
		// cout<<endl;
		}
		// cout<<endl;
		
	}
	// for(lli i =0;i<3;i++)cout<<dp[i];
	lli answer = *max_element(dp.begin(),dp.end());
	cout<<answer;
	
	return 0;
	
}
