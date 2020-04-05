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
cin>>t;
while(t--){

	lli temp;
	cin>>s;

	
		lli ans = 0;
		lli pw = 1000000000;
		while (s > 0) {
			while (s < pw) pw /= 10; //to make pw atmost = to pw
			ans += pw;
			s-= pw;
			s+=pw / 10;
			// cout<<pw<<" ";
		}
		cout << ans << endl;

}

return 0;
}
