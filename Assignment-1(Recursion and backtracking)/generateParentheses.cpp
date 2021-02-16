#include<bits/stdc++.h>
using namespace std;

void generateParenthesisHelper(int open, int close, int n, string soFar, vector<string>& result){
        if(open>n || close > n){
            return;
        }
        if(close>open){
            return;
        }
        if(open == n && close == n){
            result.push_back(soFar);
            return;
        }
        generateParenthesisHelper(open+1,close,n,soFar+'(',result);
        generateParenthesisHelper(open,close+1,n,soFar+')',result);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        int open =0, close=0;
        generateParenthesisHelper(open,close,n,"",result);
        return result;
    }

    int main(){
        int number = 5;
        vector<string> result =  generateParenthesis(number);
        for(string str : result){
            cout<<str<<endl;
        }
        return 0;
    }