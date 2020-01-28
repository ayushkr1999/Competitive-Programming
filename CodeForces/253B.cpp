#include <iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	ifstream fin("input.txt");
    ofstream fout("output.txt");
	lli n,k,t,a,c,b,mini,l,r,maxi,temp;
	fin>>n;
	c=0;
	// cout<<maxi;
	maxi=0;
	vector<lli> v1;
	for (int i = 0; i < n; ++i) {
        fin >> temp;
        v1.push_back(temp);
    }
	sort(v1.begin(),v1.end());
	
	l=0;
	r=0;
	while(r<n){
		// cout<<v1[l]<<" "<<v1[r]<<" "<<maxi<<endl;
		if(v1[r]<=2*v1[l]){
			r++;
			c++;
		}	
		else{
			c--;
			l++;
		}
		maxi=max(maxi,c);
		
	}
	fout<<n-maxi;
	
	
	return 0;
}
