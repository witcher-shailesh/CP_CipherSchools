#include<bits/stdc++.h>
using namespace std;

bool comp(int a ,int b){
    return a>b;
}

int coinChange(vector<int>& v, int amount) {
    int dp[amount+1];
    dp[0]=0;
    for(int i=1;i<=amount;i++){
        dp[i]=INT_MAX;
    }
    for(int i=1;i<=amount;i++){
        for(int j=0;j<v.size();j++){
            if(v[j]<=i){
                int temp = dp[i-v[j]];
                if(temp!=INT_MAX){
                    dp[i]=min(dp[i],temp+1);
                }
            }
        }
    }
    if(dp[amount]==INT_MAX){
        return -1;
    }
    return dp[amount];
}

int main(){
    int amount = 10;
    vector<int>  coins = {1,2,3,4,5,6,7};
    cout<<coinChange(coins,amount);
}