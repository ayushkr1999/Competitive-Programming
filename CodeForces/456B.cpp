#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int myint1;
	string s;
	cin>>s;
	
	if(s.size()==1){
		myint1 = stoi(s);
		if(myint1 % 4==0){
			cout<<4;
		}
		else{
			cout<<0;
		}
	}
	else{
		string temp=s.substr(s.size()-2, s.size());
		myint1 = stoi(temp);
		// cout<<myint1<<endl;
		if(myint1 % 4==0){
			cout<<4;
		}
		else{
			cout<<0;
		}
		
	}
	return 0;
}
