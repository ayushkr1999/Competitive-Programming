#include <iostream>
#include<set>
#include<vector>
#define lli long long int
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main() {
	// your code goes here
	lli n,m,t,q,c,temp,ans;
	char x,y;
	cin>>n>>m;
	
	vector<string> v;
	for(lli i =0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	for(lli i =0;i<n;i++){
		if(i%2==0){
			x='B';
			y='W';
		}
		else{
			x='W';
			y='B';
		}
		for(lli 	j=0;j<m;j++){
			if(v[i][j]=='-'){
				cout<<'-';
				continue;
			}
			
			else if(j%2==0 && v[i][j]!='-'){
				cout<<x;
			}
			else if(j%2!=0 && v[i][j]!='-'){
				cout<<y;
			}
			
			
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
