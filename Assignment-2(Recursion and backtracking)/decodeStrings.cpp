#include<bits/stdc++.h>
using namespace std;

        //         0   1   2   3   4   5   6.  7.  8.  9.  10. 11. 12 13. 14. 15. 16. 17. 18. 19. 20. 21. 22. 23. 24  25. 26    
vector<string> keys = {"","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

void findEncodedStrings(vector<string>& result, string& digit, string soFar , int index){
    if(index==digit.size()){
        result.push_back(soFar);
        return;
    }
    
    int a = digit[index]-'0';
    if(a==0){
        return;
    }
    findEncodedStrings(result,digit,soFar + keys[a],index+1);
    if(index!=digit.size()-1){
        int b = digit[index+1]-'0';
        if((10*a)+b <= 26){
            findEncodedStrings(result,digit,soFar + keys[(a*10)+b], index+2);
        }
    }
}

    
void numDecodings(string s) {
    vector<string> result;
    findEncodedStrings(result,s,"",0);
    for(string s : result) cout<<s<<" ";
    //return result.size();
    return 0;
}

int main(){
    string digits = "123";
    numDecodings(digits);
    return 0;
}