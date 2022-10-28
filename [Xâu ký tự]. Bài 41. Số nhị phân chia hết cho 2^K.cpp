#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isdivBy2k(string s, int k){
    string temp(s.size(), '0');
    if(k==0 || temp==s) return 1;
    if(k>s.size()-1) return 0;
    reverse(s.begin(), s.end());
    int f=0;
    for(int i=k; i<s.size(); i++){
        if(s[i]=='1'){
            f=1;
            break;
        }
    }
    if(f==0) return 0;
    for(int i=k-1; i>=0; i--){
        if(s[i]=='1') return 0;
    }
    return 1;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    if(isdivBy2k(s, k)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}