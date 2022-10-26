#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <sstream>
using namespace std;

void lwrStr(string &s){
    for(int i=0; i<s.size(); i++){
        s[i]=tolower(s[i]);
    }
}

int main() {
    string s, t, temp;
    getline(cin, s);
    getline(cin, t);
    stringstream ss(s);
    set <string> st1, st2;
    while(ss>>temp){
        lwrStr(temp);
        st1.insert(temp);
    }
    stringstream tt(t);
    while(tt>>temp){
        lwrStr(temp);
        if(st1.count(temp)) st2.insert(temp);
    }
    for(auto x : st2){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
