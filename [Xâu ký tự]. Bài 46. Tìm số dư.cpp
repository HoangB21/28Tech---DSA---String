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

int main() {
    string n;
    cin >> n;
    long long x=modCalc(n, 4);
    if(x%4) cout << "0\n";
    else cout << "4\n";
    return 0;
}