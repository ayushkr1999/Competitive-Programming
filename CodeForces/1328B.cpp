#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	
	lli t,n,m,o,e,a,k;
	cin>>t;
	while(t--){
    string s;

    cin>>n>>k;

    vector<lli> v1;

    for(lli i=1;i<n;i++)v1.push_back((i*(i+1))/2);
    lli x = lower_bound(v1.begin(),v1.end(),k) -v1.begin();


    lli mov = v1.size()-x;
    for(lli i=0;i<mov-1;i++){
      s+='a';
    }
    s+='b';

    for(lli  i=0;i<v1[x]-k;i++){
      s+='a';
    }
    s+='b';
    // cout<<s.size()<<" "<<n<<" ";
    lli v=n-s.size();
    for(lli i =0;i<v;i++){
      s+='a';
    }
    cout<<s<<endl;
	
		
	}
	return 0;
}
