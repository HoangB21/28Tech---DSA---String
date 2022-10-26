#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isdivBy4(string s){
    int x;
    if(s.size()==1){
        x=s[0];
        if(x%4) return 0;
        return 1;
    }
    x=stoi(s.substr(s.size()-2, 2));
    if(x%4) return 0;
    return 1;
}


int main() {
    string s;
    cin >> s;
    if(isdivBy4(s)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}