#include <iostream>
#include<vector>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,temp,l,r,m,t;
	cin>>n;
	vector<lli> v(n);
	for(lli i =0;i<n;i++)cin>>v[i];

	// for(lll i =0;i<m;i++)cin>>v2[i];
	for(lli i =1;i<n;i++){
		v[i]+=v[i-1];
	}
	cin>>t;
	while(t--){
		
		cin>>temp;
		l=0;
		r=v.size()-1;
		m=(l+r)/2;
		if(temp<v[0]){
			cout<<1<<endl;
			continue;
		}
		while(1){
		
			if(v[m]>temp){
				r=m;
			}
			else if(v[m]<temp){
				l=m;
			}
			else if(v[m]==temp){
				cout<<m+1<<endl;
				break;
			}
			if(r<=l+1){
				if(temp ==v[l]){
					cout<<l+1<<endl;
					break;
				}
				else{
					cout<<l+2<<endl;
					break;
				}
			}
			m=(l+r)/2;
			
			
		}
	}
	
	
	return 0;
}
