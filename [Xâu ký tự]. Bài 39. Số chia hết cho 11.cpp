#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isdivBy11(string s){
    int temp=0;
    for(int i=0; i<s.size(); i++){
        if(i%2){
            temp-=(s[i]-'0');
        }
        else temp+=(s[i]-'0');
    }
    if(temp%11) return 0;
    return 1;
}


int main() {
    string s;
    cin >> s;
    if(isdivBy11(s)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}