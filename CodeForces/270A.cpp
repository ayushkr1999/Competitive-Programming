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
		cin>>a;
		if(360%(180-a)==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
