#include <iostream>
#define lli long long int
#include<bits/stdc++.h>
using namespace std;
int main() {
    lli n,min,max,temp;
    cin>>n;
    vector<lli> v;
    for(lli i =0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    lli countMin(0);
    lli countMax(0);
    min=*v.begin();
    max=*v.rbegin();
    for(lli p = 0; p < n; p++){
        if(v[p] == min){++countMin;}
        else{break;}
    }
    for(lli p = n - 1; p >= 0; p--){
        if(v[p] == max){++countMax;}
        else{break;}
    }
    if (min==max){
        cout<<max-min<<" "<<n*(n-1)/2;
    }
    else{
    cout<<max-min<<" "<<countMin*countMax;
    }
}
