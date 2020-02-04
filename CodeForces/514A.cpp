#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main() {
	// your code goes here
	lli l,r,f;
	string s;
	// c=0;
	cin>>s;
	for(lli i=0;i<s.size();i++){
		// cout<<'9'-s[i]<<" ";
		if(s[i]=='9' && i==0){
			cout<<s[i];
			continue;
		}
		if('9'-s[i]<5){
			cout<<'9'-s[i];
		}
		else{
			cout<<s[i];
		}
	}
	
	// cout<<a;
	return 0;
}
