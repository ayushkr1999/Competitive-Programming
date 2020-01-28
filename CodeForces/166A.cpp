#include <iostream>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli n,temp,l,r,m,c,k,maxi,p,score,t;
	cin>>n>>k;
	vector<lli> v1;
	
	while(n--){
		cin>>score>>p;
		
		v1.push_back(score*100 -p);
	}
	
	sort(v1.begin(),v1.end());
	lli seek=v1[v1.size()-k];

	
	c=0;
	
	for(lli i =0;i<v1.size();i++){
		
		if(v1[i]==seek)c++;
	}
	cout<<c;
	return 0;
}
