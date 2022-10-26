#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool primeCheck(long long n){
    if (n<2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

long long SoD(string s){
    if(s.size()) return s[0]-'0'+SoD(s.substr(1));
    return 0;
}

bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]!='2' && s[i]!='3' && s[i]!='5' && s[i]!='7') return 0;
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    if(check(s) && primeCheck(SoD(s))) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}