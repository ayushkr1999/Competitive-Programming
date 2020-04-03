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
		string s;
		cin>>n>>k;
		cin>>s;
		lli ans=0;
		
		for (lli i = 0; i < k/2; ++i)
		{	
			vector<lli> v2(26,0);
			for (lli st = 0; st+k-1<n; st+=k)
			{
				lli id1= st+i;
				lli id2= st+ (k-1-i);
				v2[s[id1]-'a']++;
				v2[s[id2]-'a']++;
				/* code */
			}
			/* code */
			lli req=2*(n/k);
			lli mx=*max_element(v2.begin(),v2.end());
			ans+=req-mx;
		}
		
		
		
		if(k&1){
		std::vector<lli> v2(26,0);

		for (lli i = k/2; i < n; i+=k)
		{
			v2[s[i]-'a']++;	
		}
		lli req=(n/k);
		lli mx=*max_element(v2.begin(),v2.end());
		ans+=req-mx;
		
		}
	

		cout<<ans<<endl;	
	}
	
	return 0;
}
