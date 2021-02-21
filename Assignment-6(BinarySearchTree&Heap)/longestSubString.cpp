#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int arr[128] ={};
        int i=0,ans=0;
        for(int j=0;j<str.length();j++){
            i = max(i,arr[str[j]]);
            ans = max(ans,j-i+1);
            arr[str[j]]=j+1;
        }
        return ans;
    }
};

int main(){
    
}
