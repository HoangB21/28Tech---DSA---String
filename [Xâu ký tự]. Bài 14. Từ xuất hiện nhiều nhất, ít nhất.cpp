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
    stringstream ss(s);
    string temp;
    map <string, int> mp;
    while(ss>>temp){
        mp[temp]++;
    }
    string ans1=(*mp.begin()).first;
    string ans2=ans1;
    for(auto x : mp){
        if(x.second>=mp[ans1]) ans1=x.first;
        if(x.second<=mp[ans1]) ans2=x.first;
    }
    cout << ans1 << " " << mp[ans1] << endl << ans2 << " " << mp[ans2] << endl;
    return 0;
}