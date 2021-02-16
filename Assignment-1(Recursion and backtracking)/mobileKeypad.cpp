#include<bits/stdc++.h>
using namespace std;

vector<string> keypad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
void letterCombinationsHelper(string digits,vector<string>& result, string soFar , int digitIndex){
    if(digitIndex==digits.size()){
        result.push_back(soFar);
        return;
    }
    string currentKey = keypad[digits[digitIndex]-'0'];
    for(int i =0;i<currentKey.size();i++){
        soFar.push_back(currentKey[i]);
        letterCombinationsHelper(digits,result,soFar,digitIndex+1);
        soFar.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> result;
    if(digits.size()==0) return result;
    letterCombinationsHelper(digits,result,"",0);
    return result;
}

int main(){
    string digits = "1234";
    vector<string> result = letterCombinations(digits);
    for(string str: result){
        cout<<str<<endl;
    }
}

