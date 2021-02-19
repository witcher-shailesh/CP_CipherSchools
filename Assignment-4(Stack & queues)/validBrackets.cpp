#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    if (s.empty())return true;
    if (s.length() == 1)return false;
    stack<char> st;         
    for (char& ch : s) {
        if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty())return false;
            if ((ch == ')' && st.top() != '(') ||(ch == '}' && st.top() != '{') ||(ch == ']' && st.top() != '['))
                return false;
            st.pop();
        }
        else {
            st.push(ch);
        }
    }
    return st.empty();
}

int main(){
    string s = "{{{}}}";
    if(isValid(s))cout<<"valid";
    else cout<<"invalid";
}