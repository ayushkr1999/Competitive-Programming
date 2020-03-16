#include <iostream>
#include<vector>
#define lli long long int
#include<algorithm>
#define INF 1e9+7
using namespace std;

int main() {
	// your code goes here
	lli n,b,w,sum;
	sum=0;
	cin>>n>>w>>b;
	vector<lli> v1(n);
	for(lli i =0;i<n;i++)cin>>v1[i];
	for(lli i =0;i<n/2;i++){
		
			if(v1[i]!=v1[(n-i-1)]){
				if((v1[i]==0 && v1[(n-i-1)]==1) || (v1[i]==1 && v1[(n-i-1)]==0)){
					// f=1;
					cout<<-1;
					return 0;
				}
				else if((v1[i]==0 && v1[(n-i-1)]==2) || (v1[i]==2 && v1[(n-i-1)]==0)){
					sum+=w;
				}
				else if((v1[i]==1 && v1[(n-i-1)]==2) || (v1[i]==2 && v1[(n-i-1)]==1)){
					sum+=b;
				}
				
			}
			if(v1[i]==v1[(n-i-1)] && v1[i]==2 ){
				sum+=2*min(b,w);
			}
			
			
	}
	if(n%2!=0 && v1[n/2]==2){
				sum+=min(w,b);
	}
	cout<<sum;
	return 0;
}
