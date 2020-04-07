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

lli t,n,m,o,s,e,a,k;
lli x,y,z;
cin>>n>>k;

std::vector<int> v1;
for(lli i=1;i<=n;i++){
	v1.push_back(i);
}
reverse(v1.begin(),v1.begin()+k+1);
for(lli i =0;i<n;i++){
	cout<<v1[i]<<" ";
}
return 0;
}
