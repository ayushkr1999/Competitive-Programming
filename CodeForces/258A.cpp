#include <iostream>
#include<set>
#include<vector>
#include<string>
#define lli long long int
#include<string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli r,g,en,b,f;
	string t;
	cin>>t;
	f=0;
	for(lli i =0;i<t.size()-1;i++){
		if(f==0 && t[i]=='0'){
			f=1;
			continue;
		}
		cout<<t[i];
	}
	if(f==1){
		cout<<t[t.size()-1];
	}
	
		// cout<<s;
	return 0;
}
