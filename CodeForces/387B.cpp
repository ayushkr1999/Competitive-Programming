#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	lli n,m,temp,c,l,r;
	c=0;
	cin>>n>>m;
	vector<lli> v1(n);
	for(lli i =0;i<n;i++)cin>>v1[i];
	vector<lli> v2(m);
	for(lli i =0;i<m;i++)cin>>v2[i];
	// set<lli> s1;
	// for(lli i =0;i<m;i++){
	// 	cin>>temp;
	// 	s1.insert(temp);
	// }
	l=0;
	r=0;
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	while(l<n && r<m){
		// cout<<l<<" "<<r<<endl;
		if(v2[r]>= v1[l] ){
			c++;
			r++;
			l++;
		}
		else{
			r++;
		}
	}
	
	cout<<n-c;
	return 0;
}
