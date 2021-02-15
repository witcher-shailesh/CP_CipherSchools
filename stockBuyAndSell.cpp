#include <bits/stdc++.h> 
using namespace std; 

int maxProfit(vector<int>& prices) {
        int maxP=0;
        int minP = INT_MAX;
        for(int i =0;i<prices.size();i++){
            if(prices[i]<minP){
                minP = prices[i];
            }
            else if(prices[i]-minP>maxP){
                maxP = prices[i]-minP;
            }
        }
        return maxP;
}

int main(){
    vector<int> stockPrices = {7,1,5,3,6,4};
    cout<<maxProfit(stockPrices);
    return 0;
}