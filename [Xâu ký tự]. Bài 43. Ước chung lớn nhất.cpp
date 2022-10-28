#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long modCalc(string s, long long m){
    long long r=0;
    for(int i=0; i<s.size(); i++){
        int x=s[i]-'0';
        r=r*10+x;
        r%=m;
    }
    return r;
}

string gcd(string s, long long m){
    if(m==0) return s;
    return gcd(to_string(m), modCalc(s, m));
}

int main() {
    string n;
    long long m;
    cin >> n >> m;
    cout << gcd(n, m) << endl;
    return 0;
}