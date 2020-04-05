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
lli mi=0;

while(t--){
	string s;
	
  cin>>s;
  if(s[1]=='+')pl++;
  if(s[1]=='-')mi++;
    

}
cout<<pl-mi;

return 0;
}
