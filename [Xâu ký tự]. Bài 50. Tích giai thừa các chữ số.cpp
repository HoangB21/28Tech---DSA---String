#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void process(vector<int>&v, int a){
    if(a==4){
        v.push_back(3);
        v.push_back(2);
        v.push_back(2);
    }
    
}

int main() {
    string s;
    cin >> s;
    vector <int> v;
    for(int i=0; i<s.size(); i++){
        if(s[i]>'1'){
            int x=s[i]-'0';
            if(x==4){
                v.push_back(3);
                v.push_back(2);
                v.push_back(2);
            }
            else if(x==6){
                v.push_back(3);
                v.push_back(5);
            }
            else if(x==8){
                v.push_back(7);
                v.push_back(2);
                v.push_back(2);
                v.push_back(2);
            }
            else if(x==9){
                v.push_back(7);
                v.push_back(3);
                v.push_back(3);
                v.push_back(2);
            }
            else v.push_back(x);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto x : v){
        cout << x;
    }
    cout << endl;
    return 0;
}