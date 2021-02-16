#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int n) {
    string res;
    while (n>0) {
        n--;
        res = char('A' + n%26) + res;
        n /= 26; 
    }
    return res;
}

int main(){
    int n = 28;
    cout<<convertToTitle(n);
    return 0;
}