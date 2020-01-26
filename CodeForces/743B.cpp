#include <iostream>
#include<string>
#include <bits/stdc++.h>
#define lli long long
using namespace std;

int main() {
	// your code goes here
	lli t,n,l,r,m,k;
	// double c;
	cin>>n>>k;
	l=1;
	r=1LL<<n;
	
	while(1){
		 m= (l+r)/2;
        
        if(m == k) break;
        if(k < m)
            r= m-1;
        else
            l= m+1;
        
        n--; 
	}	
	cout<<n<<endl;
	
	return 0;
}
