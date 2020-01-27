#include <iostream>
#include<vector>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,temp,l,r,m,c,k,maxi,t;
	cin>>n>>t;
	vector<lli> v(n);
	for(lli i =0;i<n;i++)cin>>v[i];

	// for(lll i =0;i<m;i++)cin>>v2[i];
	l=0;
	r=0;
	temp=0;
	c=0;
	while(r<n){
		
		if(temp+v[r]<=t){
			temp+=v[r];
			c++;
			r++;
		}
		
		else{
			temp-=v[l];
			l++;
			c--;
		}
		maxi=max(maxi,c);
	}
	cout<<maxi;
	
	return 0;
}
