#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long t=gcd(b, c);
    while(t--){
        cout << a;
    }
    cout << endl;
    return 0;
}