#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	lli n,l,r,f;
	
	// c=0;
	cin>>n;
	vector<lli> v1(n);
	l=0;
	f=0;
	r=n-1;
	for(lli i=0;i<n;i++)cin>>v1[i];
	while(v1[l]<v1[l+1] && l+1<n){
		l++;
	}
	while(v1[r]<v1[r-1] && r-1>=0){
		r--;
	}
	if (r>=l){
		for(lli i=l;i<r;i++){
			if(v1[i]!=v1[i+1]){
				f=1;
			}
		}
		if(f==0){
			cout<<"YES";
			return 0;
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
	
	
	// cout<<a;
	return 0;
}
