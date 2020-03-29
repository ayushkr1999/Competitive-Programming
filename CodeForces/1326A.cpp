#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	/*the basic idea is simple if 
	n=1  there is  no solution
	
	else  answer is 23333.... where the length of this number is 'n' 
	as 23 is not divisible by 2 and 3 so +3 for every digit is 
	not divisible by 3 and not by 2 as well as the last digit is always 3
	which is not divisble by 2.

	*/
	lli t,n,m,o,e,a;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==1){
			cout<<-1<<endl;
		}
		else{
			cout<<2;
			while(--n){
				cout<<3;	
			}
			cout<<endl;
		}
	}
	return 0;
}
