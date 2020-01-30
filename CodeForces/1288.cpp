#include <iostream>
#include<set>
#include<vector>
#include<string>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli a,t,b;
	string c;
	cin>>t;
	while(t--){
	
		cin>>a>>b;
		c=to_string(b+1);
		cout<<a*(c.size()-1)<<endl;
	
	}
	return 0;
}
