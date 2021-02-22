#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    int first = 0,second = 1,ans=0;
    for(int i=2;i<=n+1;i++){
        ans = first+second;
        first=second;
        second=ans;
    }
    return ans;
}

int main(){
    
}