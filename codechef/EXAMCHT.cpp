#include <iostream>
#include<math.h>
#define lli long long int
using namespace std;
lli factors(lli n){
	lli c=0;
  for(lli i =1;i<=sqrt(n);i++){
		// cout<<i;
		if(n%i==0){
			if(i==n/i){
				c++;
			}
			else{
			c+=2;
			}
		
		}
	}
	// cout<<endl;
	return c;
}
int main() {
	// your code goes here
	lli t,r1,r2,x;
	cin>>t;
	while(t--){
		cin>>r1>>r2;
		x=max(r1-r2,r2-r1);
		cout<<factors(x)<<endl;
	}
	return 0;
}
