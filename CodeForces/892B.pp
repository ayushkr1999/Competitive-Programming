#include <cstdio>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[n - 1 - p]);}
    long count(0), dead(-1);
    // for(auto x:a)cout<<x<<" ";
    
    for(long p = 0; p < n; p++){
        count += (p > dead);
        dead = max(dead, p + a[p]);
    }

    // printf("%ld\n", count);
	cout<<count<<endl;
    return 0;
}
