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


  
for (int i = 0; i < 5; i++) { 
    for (int j = 0; j < 5; j++){ 
        cin>>a;
        if(a){
          // cout<<i<<" "<<j;
          cout<<abs(2-i)+abs(2-j);
        } 
    } 
} 
		

return 0;
}
