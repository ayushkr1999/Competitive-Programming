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
	lli n,m,tf,ff,s,c,temp,ans;
	// char x,y;
	cin>>n;
	s=0;
	tf=0;
	ff=0;

	while(n--){
		cin>>temp;
		
		if(temp==25){
			tf++;
			continue;
		}
		else if(temp==50){
			if(tf>=1){
				tf--;
				ff++;
			}
			
			else{	
				cout<<"NO";
				return 0;
			}
			
		}
		else if(temp==100 ){
			if(ff>=1 &tf>=1){
				ff--;
				tf--;
			}
			else if(ff==0 && tf>=3){
				tf-=3;
			}
			else{
				cout<<"NO";
				return 0;	
			}
		}
		
		
	}
	cout<<"YES";
	
	return 0;
}
