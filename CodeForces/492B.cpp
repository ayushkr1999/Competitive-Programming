#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll x,l,n,las;
	// double c;
	cin>>n>>l;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)cin>>v[i];
	
	sort(v.begin(),v.end());
	
	double c = l - v[n - 1];
    
    if(v[0] > c){c = v[0];}
	
	for(ll p =1 ;p<n;p++){
		 if(v[p] - v[p - 1] > 2 * c){
            c = 0.5 * (v[p] - v[p - 1]);
        }
	}
	
	printf("%.10lf\n", c);

	return 0;
}
