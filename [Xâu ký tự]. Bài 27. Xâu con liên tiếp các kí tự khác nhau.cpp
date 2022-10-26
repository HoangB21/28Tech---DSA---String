#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s, temp;
    cin >> s;
    int cnt=1, j=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=s[i+1]) cnt++;
        else{
            string tmp=s.substr(j, cnt);
            if(cnt>temp.size()){
                temp=tmp;
            }
            else if(cnt==temp.size()){
                if(temp<tmp) temp=tmp;
            }
            j=i+1;
            cnt=1;
        }
        if(i==s.size()-1){
            string tmp=s.substr(j, cnt);
            if(cnt>temp.size()){
                temp=tmp;
            }
            else if(cnt==temp.size()){
                if(temp<tmp) temp=tmp;
            }
            j=i+1;
            cnt=1;
        }
    }
    cout << temp << endl;
    return 0;
}