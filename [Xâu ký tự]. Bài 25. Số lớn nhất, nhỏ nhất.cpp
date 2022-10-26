#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string findMax(int m, int s){
    if(m==1 && s==0) return "0";
    string res;
    while(m--){
        if(s>=9){
            res+='9';
            s-=9;
        }
        else{
            res+=(s+'0');
            s=0;
        }
    }
    return res;
}

string findMin(int m, int s){
    if(m==1 && s==0) return "0";
    string res;
    while(m--){
        if(s>9){
            res='9'+res;
            s-=9;
        }
        else{
            if(m){
                char x=(s-1)+'0';
                res=x+res;
                s=1 ;
            }
            else{
                char x=s+'0';
                res=x+res;
            }
        }
    }
    return res;
}

int main() {
    int m, s;
    cin >> m >> s;
    if((m!=1 && s==0) || (m*9<s)) cout << "NOT FOUND\n";
    else cout << findMin(m, s) << endl << findMax(m, s) << endl;
    return 0;
}
