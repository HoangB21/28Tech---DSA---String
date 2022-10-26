#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;


int main() {
    string s, temp;
    cin >> s;
    long long sum=0;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                temp+=s[i];
                i++;
                if(i==s.size()) break;
            }
            sum+=stoll(temp);
            temp="";
        }
    }
    cout << sum << endl;
    return 0;
}