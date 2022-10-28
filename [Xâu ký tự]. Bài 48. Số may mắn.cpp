#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long SoD(string s){
    if(s.size()) return s[0]-'0'+SoD(s.substr(1));
    return 0;
}

int main(){
    string n;
    cin >> n;
    while(n.size()>1){
        n=to_string(SoD(n));
    }
    if(n=="9") cout << "YES\n";
    else cout << "NO\n";
    return 0;
}