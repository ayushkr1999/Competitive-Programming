#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<math.h>
// #include<algoi
#define lli long long int
using namespace std;
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
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
