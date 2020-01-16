#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<math.h>
// #include<algoi
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli f,n;
	f=0;
	cin>>n;
	vector<lli> s1;
	for(lli i=1;i<=(int)sqrt(n);i++){
		// cout<<i<<endl;
		if(n%i==0){
			if(i == n/i)s1.push_back(i);
			else{
				s1.push_back(i);
				s1.push_back(n/i);
			}
		}
	}
	sort(s1.begin(),s1.end());
	reverse(s1.begin(),s1.end());
  
    // for(auto x: s1){
    // 	cout<<x<<endl;
    // }
    // cout<<s1.size();
    for (lli i=0;i<s1.size();i++){
    	// cout<<s1[i]<<endl;
       
        	
        	if(isPrime(s1[i])){
        		cout<<s1[i];
        		break;
        	}
        		
        	
    }
	return 0;
}
