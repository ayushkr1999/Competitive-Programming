#include <iostream>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,t;
	// maxi=0;
	cin>>n;
	t=n;
	vector<lli>v1(3);
	vector<lli>v2(3);
	for(lli  i=0;i<3;i++)cin>>v1[i];
	while(t--){
	vector<lli>v2(3);
	for(lli  i=0;i<3;i++)cin>>v2[i];
	
	for(lli  i=0;i<3;i++){
		v2[i]+=max(v1[(i+1)%3],v1[(i+2)%3]);
	}
	// for(auto x: v1){
	// 	cout<<x<<" ";
		
	// }
	// cout<<endl;
	v1=v2;
		
	}
	
	lli maxi=*max_element(v1.begin(),v1.end());
	cout<<maxi;
	return 0;
	
}
