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

string email(string s){
    stringstream ss(s);
    string temp, res;
    while(ss>>temp){
        res+=tolower(temp[0]);
    }
    res=res.substr(0, res.size()-1);
    for(int i=0; i<temp.size(); i++){
        temp[i]=tolower(temp[i]);
    }
    res=temp+res;
    res+="@xyz.edu.vn";
    return res;
}

string password(string s){
    string res;
    for(int i=0; i<s.size(); i++){
        if((i==0 || i==3) && s[i]=='0') continue;
        if(s[i]>='0' && s[i]<='9') res+=s[i];
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s, name, date;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>date){
            if(date[0]>='0' && date[0]<='9') break;
            name+=date;
            name+=" ";
        }
        cout << email(name) << endl << password(date) << endl;
    }
    return 0;
}