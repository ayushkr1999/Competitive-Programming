#include <iostream>
#define lli long long int
using namespace std;
lli nc2(lli n){
	return n*(n-1)/2;
}
int main() {
	// your code goes here
	lli n,m,mini,max;
	cin>>n>>m;
	max=(n-m+1)*(n-m)/2;
	mini=(m-n%m)*nc2(n/m) + (n%m)*nc2(n/m+1); 
	cout<<mini<<" "<<max;
	return 0;
}
