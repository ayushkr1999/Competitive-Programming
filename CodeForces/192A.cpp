#include <iostream>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,k,t,a,b,mini,l,r,maxi,temp;
	cin>>n;
	
	
	// cout<<maxi;
	vector<lli> v1;
	k=0;
	while(k*(k+1)/2 <=n){
		
		temp =k*(k+1)/2;
		
		v1.push_back(temp);
		k++;
	}
	l=1;
	r=v1.size()-1;
	while(l<=r){
		if (v1[l]+v1[r]== n){cout<<"YES"<<endl;
		return 0;}
		else if(v1[l]+v1[r]<n){l++;}
		else if(v1[l]+v1[r]>n){r--;}
	}
	cout<<"NO";
	
	
	return 0;
}
