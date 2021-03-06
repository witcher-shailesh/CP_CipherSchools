#include<bits/stdc++.h>
using namespace std;

int dpMemo(bool back, int start, int f, int b, int home, vector<vector<int>>& dp){
    if(start == home) return dp[start][back] = 0; 
    if(start>6001|| start <0 || dp[start][back]== -2 ) return 1e5;
    if(dp[start][back] != -1) return dp[start][back]; 
    dp[start][back] = 1+ dpMemo(false,start+f, f,b,home, dp); 
    if(!back) dp[start][back] = min(dp[start][back],1+dpMemo(true,start-b, f,b,home, dp)); 
    
    return dp[start][back] ; 
}
int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
    vector<vector<int>> dp(6005, vector<int>(2, -1)); 
    for(auto x:forbidden) dp[x][0] = -2, dp[x][1] = -2; 
    int res = dpMemo(false,0 , a,b,x , dp); 
    return  res > 1e5 ? -1:res; 
}

int main(){
    
}