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

string stdName(string s){
    stringstream ss(s);
    string temp, res;
    while(ss>>temp){
        temp[0]=toupper(temp[0]);
        for(int i=1; i<temp.size(); i++){
            temp[i]=tolower(temp[i]);
        }
        res+=temp;
        res+=" ";
    }
    return res.substr(0, res.size()-1);
}

string stdDate(string s){
    if(s[2]!='/') s.insert(0, "0");
    if(s[5]!='/') s.insert(3, "0");
    return s;
}

int main() {
    string name, date;
    getline(cin, name);
    getline(cin, date);
    cout << stdName(name) << endl << stdDate(date) << endl;
    return 0;
}