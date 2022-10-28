#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    long long m;
    cin >> n >> m;
    cout << modCalc(n, m) << endl;
    return 0;
}