#include <vector>
#include<iostream>
#include<algorithm>
#include<set>
#define lli long long int
using namespace std;

//can be done without sets using 2 pointers as well
int main() {
	// your code goes here
	lli n,s,l,maxi;
	cin>>n;
	vector<lli> v1(n);
	for(lli i =0;i<n;i++)cin>>v1[i];
	sort(v1.begin(),v1.end());
	s=0;
	l=s+1;
	maxi=1;
	multiset<lli> s1;
	s1.insert(v1[0]);
	while(l<n){
		// cout<<l;
		if(v1[l]-*s1.begin()<=5){
			s1.insert(v1[l]);
				
		}
		else{
			// cout<<"jkk";
			s1.erase(s1.begin());
			s1.insert(v1[l]);
			
		}
		l++;
		// cout<<(lli)s1.size();
		maxi=max(maxi,(lli)s1.size());
	}
	cout<<maxi;
	return 0;
}
