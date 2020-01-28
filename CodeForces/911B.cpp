#include <iostream>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,k,t,a,b,mini,maxi;
	cin>>n>>a>>b;
	maxi=0;
	mini=0;
	for(lli i=1;i<n;i++){
		if(i<=a && (n-i)<=b)
			mini=min((a/i),(b/(n-i)));
			
		maxi=max(maxi,mini);
	}
	cout<<maxi;
	
	
	return 0;
}
