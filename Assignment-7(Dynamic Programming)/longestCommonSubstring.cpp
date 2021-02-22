#include<bits/stdc++.h>
using namespace std;


int longestCommonSubstr (string S1, string S2, int n, int m)
{
    int res = 0;
    int dp[n + 1][m + 1];
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            {
                dp[i][j] = 0;
            }
            else if(S1[i - 1] == S2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                
                res = max(res, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return res;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.length(),m = s2.length();
    cout<<longestCommonSubstr(s1,s2,n,m);
}