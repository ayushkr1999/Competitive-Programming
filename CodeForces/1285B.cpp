#include <iostream>
#define lli long long int
#include<vector>
using namespace std;
bool solve(vector<lli> &v1,lli n){
	lli sum(0);
	for(lli i =0;i<n;i++){
		sum=sum+v1[i];
		if(sum<=0){
			return false;
		}
	}
	sum=0;
	for(lli i =n-1;i>=0;i--){
		sum+=v1[i];
		if(sum<=0){
			return false;
		}
	}
	return true;
}
int main() {
	// your code goes here
	lli t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		vector<lli> v1(n);
		for(lli i =0;i<n;i++){
			cin>>v1[i];
		}
		
		if(solve(v1,n)) cout << "YES\n";
	        else cout << "NO\n";
	}
	return 0;
}
