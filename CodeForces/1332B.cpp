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

	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<lli> v1(n);
		std::vector<lli> v2;
		for (lli i = 0; i < n; ++i)cin>>v1[i];
		vector<lli> prime{2,3,5,7,11,13,17,19,23,29,31};
		for (lli i = 0; i < n; ++i)v2.push_back(-1);
		lli col=1;
		for(auto x: prime){
			lli f=0;	
			for (lli i = 0; i < n; ++i)
			{
				if(v2[i]!=-1)
					continue;
				if(v1[i]%x)
					continue;

				f=1;
				v2[i]=col;

				/* code */
			}
			if(f)col++;
		}
		cout<<col-1<<endl;
		for(auto x:v2)cout<<x<<" ";
		cout<<endl;	
	}
	
	return 0;
}
