#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    long long int m,n;
    cin>>m>>n;
    cout<<min(m,min(n,(m+n)/3));
}
