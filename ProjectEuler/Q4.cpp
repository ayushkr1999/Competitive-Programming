#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<math.h>
// #include<algoi
#define lli long long int
using namespace std;
bool ispalindrome(lli n){
	lli reversedN,originalN,remainder;
	originalN = n;
	reversedN=0;
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    
    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        return true;
    else
        return false;
}
int main() {
	lli n=999;
	vector<lli> v1;
	for(lli i = n ;i>0;i--){
		for(lli j = n; j>0;j--){
			
			if(ispalindrome(j*i)){
				// cout<<i<<" "<<j<<endl;
				v1.push_back(j*i);
			}
		}
	}
	
	sort(v1.begin(),v1.end());
	reverse(v1.begin(),v1.end());
	
	for(auto x: v1){
		cout<<x;
		break;
	}
	return 0;
}
