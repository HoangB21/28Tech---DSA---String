#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool nonIncreaseCheck(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i]<s[i+1]) return 0;
    }
    return 1;
}

bool nonDecreaseCheck(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i]>s[i+1]) return 0;
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    if(nonIncreaseCheck(s)||nonDecreaseCheck(s)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}