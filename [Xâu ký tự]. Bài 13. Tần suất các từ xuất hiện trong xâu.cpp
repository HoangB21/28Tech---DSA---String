#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string x;
    map <string, int> mp;
    while(ss>>x){
        v.push_back(x);
        mp[x]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(auto x : v){
        if(mp[x]){
            cout << x << " " << mp[x] << endl;
            mp[x]=0;
        }
    }
    return 0;
}