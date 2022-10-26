#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <sstream>
using namespace std;

bool cmpStr(string a, string b){
    string ab=a+b, ba=b+a;
    return ab>ba; 
}

int main() {
    int n;
    cin >> n;
    vector <string> v;
    while(n--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    stable_sort(v.begin(), v.end(), cmpStr);
    for(auto x : v){
        cout << x;
    }
    return 0;
}
