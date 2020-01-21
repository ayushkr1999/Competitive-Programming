#include <iostream>
#include<vector>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,d,total,num,r;
	cin>>n>>d;
	vector<lli> v(n);
	for(lli i=0;i<n;i++)cin>>v[i];
	r=0;
	total=0;
	num=0;
	for(lli l=0;l<n-2;l++){
		while(r<n && v[l]+d>=v[r]){r++;}
		r--;
		num=r-l;
		total+= num*(num-1)/2;
	}
	cout<<total;
	return 0;
}
