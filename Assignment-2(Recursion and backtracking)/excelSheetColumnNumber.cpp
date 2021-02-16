#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string s) {
    int i=s.size()-1,ans=0,cnt=0;
    while(i>=0)
    {
        ans+= pow(26,cnt)*(s[i]-'A'+1);
        cnt++;
        i--;
    }
    return ans;
}

int main(){
    string s = "AB";
    cout<<titleToNumber(s);
    return 0;
}