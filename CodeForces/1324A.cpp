#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli t,n,m,o,e,a;
	cin>>t;
	while(t--){
		cin>>n;
		e=0;
		o=0;
		while(n--){
			cin>>a;
			if(a%2==0){
				e++;
			}
			else{
				o++;
			}
		}
		if(e && o){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
