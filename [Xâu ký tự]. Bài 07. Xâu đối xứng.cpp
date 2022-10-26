#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool palindromeStringCheck(string s){
    int l=0, r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if(palindromeStringCheck(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
