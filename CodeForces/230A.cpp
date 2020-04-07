#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
// your code goes here
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

lli t,m,o,s,e,a,k,b;
lli x,y,z;
lli n;
// cin>>n;
// cin>>t;
lli f=0;
// lli f=0;
// k=n;
cin>>s>>n;
std::vector<pair<lli ,lli>> v1;

for(lli i =0;i<n;i++){
	cin>>a>>b;
	v1.push_back(make_pair(a,b));
}
sort(v1.begin(),v1.end());
for(lli i=0;i<n;i++){
	// cout<<v1[i].first<<" "<<v1[i].second<<endl;
	if(v1[i].first >=s){
		f=1;
		break;
	}
	s+=v1[i].second;
}
	

// }
// cout<<c;
cout<<(f==0?"YES":"NO");
return 0;
}
