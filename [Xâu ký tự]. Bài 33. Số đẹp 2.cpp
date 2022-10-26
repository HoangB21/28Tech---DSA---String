#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool palindromeCheck(string s){
    string t=s;
    reverse(s.begin(), s.end());
    return t == s;
}

bool check6(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='6') return 1;
    }
    return 0;
}

int main() {
    string s;
    cin >> s;
    if(check6(s) && palindromeCheck(s)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}