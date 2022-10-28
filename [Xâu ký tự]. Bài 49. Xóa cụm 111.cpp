#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string del111(string s){
    while(s.find("111")!=string::npos){
        int x=s.find("111");
        s.erase(x, 3);
    }
    if(s.size()) return s;
    return "EMPTY";
}

int main() {
    string s;
    cin >> s;
    cout << del111(s) << endl;
    return 0;
}