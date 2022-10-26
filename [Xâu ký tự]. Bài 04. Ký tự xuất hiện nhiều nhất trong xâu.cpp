#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n=s.size();
    map <char, int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    char ans1=s[0], ans2=s[0];
    for(auto x : mp){
        if(x.second>=mp[ans1]){
            ans1=x.first;
        }
        else if(x.second<=mp[ans2]){
            ans2=x.first;
        }
    }
    cout << ans1 << " " << mp[ans1] << endl;
    cout << ans2 << " " << mp[ans2] << endl;
    return 0;
}
