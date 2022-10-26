#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isdivBy25(string s){
    if(s=="0") return 1;
    if(s.size()<2) return 0;
    int x;
    x=stoi(s.substr(s.size()-2, 2));
    if(x%25) return 0;
    return 1;
}


int main() {
    string s;
    cin >> s;
    if(isdivBy25(s)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}