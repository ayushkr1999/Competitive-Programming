#include <iostream>
#include<string>
#include<vector>
#define lli long long int
#include<algorithm>
using namespace std;
bool dfs(vector<lli> &arr,lli i,lli sum,int n){
	if(i==n)return sum%360==0;
	if(dfs(arr,i+1,sum+arr[i],n))return true;
	if(dfs(arr,i+1,sum-arr[i],n))return true;
	return false;
}
int main() {
	// your code goes here
	lli ans,t,n,k,c,temp,d,l;
	bool f;
	cin>>n;
	vector<lli> v(n);
	for(lli i =0;i<n;i++)cin>>v[i];
	f=dfs(v,0,0,n);
	if(f){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
	
}
