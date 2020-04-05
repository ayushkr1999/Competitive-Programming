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
cin>>t;
lli pl=0;
lli c=0;
// lli s3=0;
while(t--){
	s=0;
	cin>>x>>y>>z;
	
  s+=x+y+z;
  if(s>1)c++;
  	
    

}
cout<<c;

return 0;
}
