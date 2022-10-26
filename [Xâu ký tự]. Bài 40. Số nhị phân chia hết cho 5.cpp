#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long powMod(long long a, long long b, long long c){
    long long res=1;
    while(b){
        if(b%2){
            res*=a;
            res%=c;
        }
        a*=a;
        a%=c; 
        b/=2;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    long long sum=0;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            sum+=powMod(2, i, 5);
            sum%=5;
        }
    }
    if(sum%5) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}