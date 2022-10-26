#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    int cnt=0;
    stringstream ss(s);
    string x;
    while(ss>>x){
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
