#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long SoD(string s){
    if(s.size()) return s[0]-'0'+SoD(s.substr(1));
    return 0;
}

bool isdivBy6(string s){
    if((s[s.size()-1]-'0')%2) return 0;
    if(SoD(s)%3) return 0;
    return 1;
}


int main() {
    string s;
    cin >> s;
    if(isdivBy6(s)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}