#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

bool pangramCheck(string s){
    set <char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        st.insert(s[i]);
    }
    for(char i='a'; i<='z'; i++){
        if(st.count(i)==0) return 0;
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    if(pangramCheck(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
