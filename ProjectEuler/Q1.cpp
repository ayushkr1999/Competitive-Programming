#include <iostream>
#include<set>
#include<algorithm>
#include <numeric> 
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	lli i;
	set<lli> s1;
	i=1;
	while(3*i <10){
		s1.insert(3*i);
		i++;
	}
	i=1;
	while(5*i <10){
		s1.insert(5*i);
		i++;
	}
	lli sum = accumulate(s1.begin(), s1.end(), 0);
	cout<<sum;
	return 0;
}
