#include <iostream>
#include<set>
#include<vector>
#include<string>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli t,r,g,en,b;
	
	cin>>t;
	while(t--){
		vector<lli> v(3);
		cin>>v[0]>>v[1]>>v[2];
		sort(v.begin(),v.end());
		if(v[2]>=v[0]+v[1])
			cout<<v[0]+v[1]<<endl;
		else
			cout<<(v[0]+v[1]+v[2])/2<<endl;
	}
	// cout<<s;
	return 0;
}
