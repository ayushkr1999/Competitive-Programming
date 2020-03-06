#include <iostream>
#define lli long long int
#include<vector>
using namespace std;

int main() {
	// your code goes here
	lli t,c,n,k,maxi,i;
	cin>>t;
	while(t--){
		maxi=0;
		cin>>n>>k;
		vector<char> v1(n);
		c=0;
		for(lli i =0;i<n;i++)cin>>v1[i];
		i=n-1;
		while(c<k){
			if(v1[i]=='H'){
				for(lli j=0;j<i;j++){
					if(v1[j]=='H'){
						v1[j]='T';
					}
					else{
						v1[j]='H';
					}
				}
			}
			i--;
			c++;
		}
		for(lli j=0;j<n-k;j++){
			// cout<<v1[j]<<" ";
			if(v1[j]=='H'){
				maxi++;
			}
		}
		cout<<maxi<<endl;
	}
	return 0;
}
