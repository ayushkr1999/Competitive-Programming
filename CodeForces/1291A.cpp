#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	lli n,m,a,k,t,s;
	
	// c=0;
	cin>>t;
	while(t--){
		string st;
		cin>>n;
		s=0;
		k=0;
		cin>>st;
		for(lli i=0;i<st.size();i++){
			s+=int(st[i]);
			if(s%2==0 && int(st[i])%2!=0){
				k=i;
				break;
			}
			
		}
		for(lli i =0;i<k+1;i++){
			if(k==0){
				cout<<-1;
				break;
			}
			if(k<st.size())
				cout<<st[i];
		}
		cout<<endl;
		
		
	}
	
	
	// cout<<a;
	return 0;
}
