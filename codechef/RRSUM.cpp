#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	
	lli n,m,l,r,q,c,temp,ans;
	
	
	cin>>n>>m;
	while(m--){
		cin>>q;
		l=max(n+1,q-n);
		r=min(q-1,2*n);
		if(l>r){
			ans=0;
		}
		else{
			ans=r-l+1;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
