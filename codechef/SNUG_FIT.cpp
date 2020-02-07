#include <iostream>
#include<string>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli ans,t,n;
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		vector<lli> v1(n);
		vector<lli> v2(n);
		for(lli i =0;i<n;i++)cin>>v1[i];
		for(lli i =0;i<n;i++)cin>>v2[i];
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		for(lli i =0;i<n;i++){
			ans+=min(v1[i],v2[i]);
		}
		
		cout<<ans<<endl;
	
	}
	return 0;
}
