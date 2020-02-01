#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	lli n,m,t,a,c,temp,temp2;
	
	// c=0;
	cin>>t;
	while(t--){
		cin>>n;
		n--;
		cin>>temp;
		c=1;
		while(n--){
			cin>>temp2;
			if(temp2<=temp){
				c++;
				temp=temp2;
			}
		}
		cout<<c<<endl;
	}
	
	return 0;
}
