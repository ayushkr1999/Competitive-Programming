#include <iostream>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,temp,l,r,m,c,k,maxi,t;
	cin>>n>>t;
	vector<lli> v1(n);
	
	for(lli i =0;i<n;i++)cin>>v1[i];
	
	sort(v1.begin(),v1.end());
	
	
	while(t--){
		
		cin>>temp;
		
		lli c=upper_bound(v1.begin(),v1.end(),temp) -v1.begin();
		cout<<c<<" ";
		}
	

	return 0;
}
