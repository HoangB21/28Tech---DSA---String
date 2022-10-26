#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

void del0(string &s){
    while(s[0]=='0' && s.size()>1){
        s=s.substr(1);
    }
}

bool cmp(string a, string b){
    return a+b>b+a;
}

int main() {
    string s, temp;
    cin >> s;
    vector<string> v;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                temp+=s[i];
                i++;
                if(i==s.size()) break;
            }
            del0(temp);
            v.push_back(temp);
            temp="";
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        cout << x;
    }
    return 0;
}