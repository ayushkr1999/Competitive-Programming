#include <iostream>
#include<vector>
#define lli long long int
#include<algorithm>
#define INF 1e9+7
using namespace std;

int main() {
	// your code goes here
	lli t,n,a,b,w,sum;
	sum=0;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a>b){
			w=a;
			a=b;
			b=w;
		}
		if((a+b)%3==0 && b<=a*2){
			
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;	
}
	
