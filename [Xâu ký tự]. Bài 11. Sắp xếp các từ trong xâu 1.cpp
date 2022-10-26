#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std;

bool cmpstr(string a, string b){
    if(a.size()==b.size()) return a<b; 
    return a.size()<b.size();
}

int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string x;
    while(ss>>x){
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), cmpstr);
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}