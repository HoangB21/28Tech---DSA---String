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
    string s, t;
    getline(cin, s);
    getline(cin, t);
    if(s.find(t)!=string::npos) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}