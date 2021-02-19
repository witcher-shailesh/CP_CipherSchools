#include<bits/stdc++.h>
using namespace std;

void actualPos(stack<int>& s, int temp){
    if(s.empty() || s.top()<=temp){
        s.push(temp);
        return;
    }
    int t = s.top();
    s.pop();
    actualPos(s,temp);
    s.push(t);
}

void sortRecursive(stack<int>& s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    sortRecursive(s);
    actualPos(s,temp);
}

int main(){
    stack<int> st;
    push(st,1);
    push(st,-2);
    push(st,-3);
    push(st,0);
    push(st,5);
    sortRecursive(st);
}