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

int main() {
    string s;
    cin >> s;
    cout << SoD(s) << endl;
    return 0;
}