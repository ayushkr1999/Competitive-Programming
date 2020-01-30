#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,m,ef,temp,l,r,x,y,c,k;
	c=0;
	cin>>l>>r>>x>>y>>k;
	
	for(lli i=x;i<=y;i++){
		ef= k*i;
		// cout<<ef<<" ";
		if(l<=ef && ef<=r){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	
	return 0;
}
