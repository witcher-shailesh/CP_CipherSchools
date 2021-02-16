#include <bits/stdc++.h>
using namespace std;

double dfs(int N, int K, int r, int c) {
    if(!K)
        return 1;
    if(*(int *) &dp[K][r][c] == -1) {
        double cnt = 0;
        for(auto &w : ways) {
            auto [i, j] = w;
            i += r, j += c;
            if(0 <= i && i < N && 0 <= j && j < N)
                cnt += dfs(N, K - 1, i, j);
        }
        dp[K][r][c] = cnt;
    }
    return dp[K][r][c];
}
double knightProbability(int N, int K, int r, int c) {
    memset(dp, 0xff, sizeof(dp));
    return dfs(N, K, r, c) / pow(8, K);
}
double dp[101][25][25];
pair<int, int> ways[8] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}};

int main(){
    int a = 3 ,b = 2, c = 0 , d = 0;
    cout<< knightProbability(a,b,c,d);

}