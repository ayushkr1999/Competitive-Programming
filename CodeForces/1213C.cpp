#include <iostream>
#include<set>
#include<vector>
#include<string>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,t,m,s,k;
	string c;
	cin>>t;
	while(t--){
		cin>>n>>m;
		s=0;
		k=n/m;
		for(lli i=0;i<10;i++){
			s+=m*(i+1)%10;
		}
		s*=(k/10);
		for(lli i=0;i<k%10;i++){
			s+=m*(i+1)%10;
		}
		cout<<s<<endl;
	}
	return 0;
}
