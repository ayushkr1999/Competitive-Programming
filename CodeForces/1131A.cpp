#include <iostream>
#include<vector>
#define lli long long int
#include<algorithm>
#define INF 1e9+7
using namespace std;

int main() {
	// your code goes here
	lli w1,w2,h1,h2,d1,d2,dw;
	cin>>w1>>h1>>w2>>h2;
	dw=(max(w1,w2)+2)*2;
	d1=h1*2;
	d2=h2*2;
	cout<<dw+d1+d2;
	return 0;	
}
	  
