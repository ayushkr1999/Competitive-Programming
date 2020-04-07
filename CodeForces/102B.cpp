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

lli t,m,o,s,e,a,k;
lli x,y,z;
string n;
cin>>n;

lli c=1;
k=0;
if(n.size()==1){
	cout<<0;
}

else{
	
	for(lli i =0;i<n.size();i++){
		
		k+=(int) n[i] -48;
	}

	lli sum=k;
	
	while(sum>=10){
		
		sum=0;
		while(k){
			
			sum+=k%10;
			k=k/10;

		}
		
		k=sum;
		c++;
	}
	cout<<c;
}


return 0;
}
