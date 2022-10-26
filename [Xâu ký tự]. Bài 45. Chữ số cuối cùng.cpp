#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long modCalc(string s, long long m){
    long long r=0;
    for(int i=0; i<s.size(); i++){
        int x=s[i]-'0';
        r=r*10+x;
        r%=m;
    }
    return r;
}

int main() {
    string n;
    cin >> n;
    long long x=modCalc(n, 4);
    switch (x)
    {
    case 1:
        cout << "8\n";
        break;
    case 2:
        cout << "4\n";
        break;
    case 3:
        cout << "2\n";
        break;
    case 0:
        cout << "6\n";
        break;
    default:
        break;
    }
    return 0;
}