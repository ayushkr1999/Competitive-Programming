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
cin>>n;
// cin>>t;
for (int i = n+1; i >0; i--)
{
	for (int j=i; j > 1; j--)
	{
		cout<<"  ";
		/* code */
	}
	for(int k=0;k<n+2-i;k++){
		if(k==0)cout<<k;
		else cout<<" "<<k;
		x=k;
	}
	// cout<<"%%"<<x<<"%%";
	for(int n=x; n>=1;n--){
		
		cout<<" "<<n-1;
	}
	cout<<endl;
	/* code */
}
// cout<<endl;
for (int i = 0; i < n; ++i)
{
	for (int j = 0; j<=i; ++j)
	{
		cout<<"  ";
		/* code */

	}
	for (int k = 0; k < n-i; ++k)
	{
		if(k==0)cout<<k;
		else cout<<" "<<k;
		/* code */
	}
	for (int k = n-i-2; k >=0; k--)
	{
		// if(k==n-i-2)cout<<k;
		cout<<" "<<k;
		/* code */
	}

	cout<<endl;
	/* code */
}
    

// }
// cout<<c;
// cout<<(s1 ==0 && (s1==s2 && s1==s3)?"YES":"NO");
return 0;
}
