#include <iostream>
#include<string>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,maxi,temp,zero,one,maxzero;
	// maxi=0;
	zero=0;
	one=0;
	maxzero=-1;
	cin>>n;
	while(n--){
		cin>>temp;
		
		if(temp==1){
			one++;
			if(zero>0){
				zero--;
			}
		}
		else{
			zero++;
			maxzero=max(maxzero,zero);
		}
	}
	cout<<maxzero+one;
	
	
	return 0;
}
