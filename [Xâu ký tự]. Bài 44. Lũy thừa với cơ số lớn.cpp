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

long long powMod(string n, long long m){
    long long tmp=modCalc(n, 1e9+7), res=1, mod=1e9+7;
    while(m){
        if(m%2){
            res*=tmp;
            res%=mod;
        }
        tmp*=tmp;
        tmp%=mod;
        m/=2;
    }
    return res;
}

int main() {
    string n;
    long long m;
    cin >> n >> m;
    cout << powMod(n, m) << endl;
    return 0;
}