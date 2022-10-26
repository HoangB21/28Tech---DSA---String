#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long cnt[256]={};

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        cnt[s[i]]++;
    }
    long long ans=s.size();
    for(char i='a'; i<='z'; i++){
        if(cnt[i]>1) ans+=((long long)cnt[i]*(cnt[i]-1)/2);
    }
    cout << ans << endl;
    return 0;
}
