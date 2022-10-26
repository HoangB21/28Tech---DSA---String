#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool pythonCheck(string s){
    string t="python";
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t[cnt]) cnt++;
    }
    if(cnt==6) return 1;
    return 0;
}

int main() {
    string s;
    cin >> s;
    if(pythonCheck(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}