#include <iostream>
#include<set>
#include<vector>
#include<string>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,a,b,en,s;
	a=0;
	s=0;
	en=0;
	cin>>n;
	while(n--){
		cin>>b;
		en+= a-b;
		
		if(en<0){
			
			s+= -en;
			en=0;
		}
		a=b;
		
	}
	cout<<s;
	return 0;
}
