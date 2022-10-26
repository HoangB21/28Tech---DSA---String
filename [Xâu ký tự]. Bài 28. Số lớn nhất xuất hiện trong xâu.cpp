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

int cmpBigNum(string a, string b){
    if(a.size()>b.size()) return 1;
    if(a.size()<b.size()) return -1;
    int k=a.size();
    for(int i=0; i<k; i++){
        if(a[i]<b[i]) return -1;
        if(a[i]>b[i]) return 1;
    }
    return 0;
}

int main() {
    string s, temp;
    cin >> s;
    string Max="";
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                temp+=s[i];
                i++;
                if(i==s.size()) break;
            }
            del0(temp);
            if(cmpBigNum(temp, Max)>0) Max=temp;
            temp="";
        }
    }
    cout << Max << endl;
    return 0;
}