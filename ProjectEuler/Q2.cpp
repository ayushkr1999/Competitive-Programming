#include <iostream>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli sum,n,f1,f2,f;
	sum=0;
	
	f2=0;
	f1=2;
	cin>>n;
	while(f1<n){
		sum+=f1;
		
		f=4*f1+f2;
		f2=f1;
		f1=f;
		
		
	}
	cout<<sum;
}
