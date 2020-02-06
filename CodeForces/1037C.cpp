#include <iostream>
#include<string>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,ans,i;
	i=0;
	ans=0;
	string s;
	string t;
	cin>>n;
	cin>>s;
	cin>>t;
	while(i<n){
		if(s[i]!=t[i]){
		if(i+1<n &&s[i]!=s[i+1] &&s[i+1]!=t[i+1]){
			ans++;
			i+=2;
		}
		else{
			i++;
			ans++;
		}
		}
		else{
			i++;
		}
	
	}
		cout<<ans;
	
	
	return 0;
}
