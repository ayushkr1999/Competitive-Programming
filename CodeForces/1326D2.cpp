#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli kmp(string s){
	vector<lli> lps(s.size(),0);
	for(lli i =1;i<lps.size();++i){
		lli p=lps[i-1];
		while(p>0&& s[i]!=s[p]){
			p=lps[p-1];
		}		
		lps[i]=p+(s[i]==s[p] ? 1:0);
	}
	return lps[lps.size()-1];
}
lli largest_pal(string s){
	
	string t =s+"?";
	reverse(s.begin(),s.end());
	t+=s;
	return kmp(t);
}
int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,maxi;
	// cin>>t;
	// while(t--){
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		n=st.size();
		lli l=0;
		for(lli i=0,j=n-1;i<j;i++,j--){
			if(st[i]==st[j]){
				l++;
			}
			else{
				break;
			}
			
		}
		string pre=st.substr(0,l);
		string rem=st.substr(l,n-2*l);
		// cout<<pre<<" "<<rem<<endl;
		if(rem.size()){
			lli pr= largest_pal(rem);
			
			reverse(rem.begin(),rem.end());
			
			lli su = largest_pal(rem);
			if(pr>=su){
				reverse(rem.begin(),rem.end());
				pre+=rem.substr(0,pr);
				
			}
			else{
				pre+=rem.substr(0,su);
			}
		}
		string post= st.substr(n-l,l);
		cout<<pre+post<<endl;
	}
	return 0;
}
	
