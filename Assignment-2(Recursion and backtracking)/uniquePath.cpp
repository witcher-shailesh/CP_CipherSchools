#include <bits/stdc++.h> 
using namespace std; 

int uniquePaths(int m, int n) {
    vector<int> dp(n,1);
    for(int i =1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[j]+=dp[j-1];
        }
    }
    return dp[n-1];
}

int main(){
    int rows = 3 , column = 7;
    int result = uniquePaths(rows,column);
    cout<<result;
    return 0;
}