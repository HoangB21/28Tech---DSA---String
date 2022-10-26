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

string stdName1(string s){
    stringstream ss(s);
    string temp1, res;
    while(ss>>temp1){
        temp1[0]=toupper(temp1[0]);
        for(int i=1; i<temp1.size(); i++){
            temp1[i]=tolower(temp1[i]);
        }
        res+=temp1;
        res+=" ";
    }
    res=res.substr(0, res.size()-1);
    while(res[res.size()-1]!=' '){
        res=res.substr(0, res.size()-1);
    }
    res.insert(res.size()-1, ",");
    for(int i=1; i<temp1.size(); i++){
        temp1[i]=toupper(temp1[i]);
    }
    res+=temp1;
    return res;
}

string stdName2(string s){
    stringstream ss(s);
    string temp1, res;
    while(ss>>temp1){
        temp1[0]=toupper(temp1[0]);
        for(int i=1; i<temp1.size(); i++){
            temp1[i]=tolower(temp1[i]);
        }
        res+=temp1;
        res+=" ";
    }
    res=res.substr(0, res.size()-1);
    while(res[res.size()-1]!=' '){
        res=res.substr(0, res.size()-1);
    }
    res=res.substr(0, res.size()-1);
    res=", "+res;
    for(int i=1; i<temp1.size(); i++){
        temp1[i]=toupper(temp1[i]);
    }
    res=temp1+res;
    return res;
}

int main() {
    string name, date;
    getline(cin, name);
    cout << stdName1(name) << endl << stdName2(name) << endl;
    return 0;
}