#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	double n,m,a;
	
	// c=0;
	cin>>n>>m>>a;
	
	lli temp2= ceil(m/a)*ceil(n/a);
	cout<<temp2;
	
	// cout<<a;
	return 0;
}
