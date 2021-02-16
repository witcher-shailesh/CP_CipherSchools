#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, int m[][5], int n, bool visited[][5])
{
    if (row == -1 || row == n || col == -1 || 
                  col == n || visited[row][col] 
                           || m[row][col] == 0)
        return false;

    return true;
}

void pathFollow(int row, int col, int m[][5], int n, string& path, vector<string>& possiblePaths, bool visited[][5])
{
    if (row == -1 || row == n || col == -1 || col == n || visited[row][col] || m[row][col] == 0)
        return;
    if (row == n - 1 && col == n - 1) {
        possiblePaths.push_back(path);
        return;
    }
    visited[row][col] = true;
    if (isSafe(row + 1, col, m, n, visited))
    {
        path.push_back('D');
        pathFollow(row + 1, col, m, n,path, possiblePaths, visited);
        path.pop_back();
    }
    if (isSafe(row, col - 1, m, n, visited))
    {
        path.push_back('L');
        pathFollow(row, col - 1, m, n,path, possiblePaths, visited);
        path.pop_back();
    }
    if (isSafe(row, col + 1, m, n, visited)) 
    {
        path.push_back('R');
        pathFollow(row, col + 1, m, n,path, possiblePaths, visited);
        path.pop_back();
    }
    if (isSafe(row - 1, col, m, n, visited))
    {
        path.push_back('U');
        pathFollow(row - 1, col, m, n,path, possiblePaths, visited);
        path.pop_back();
    }
    visited[row][col] = false;
}
void printPath(int m[5][5], int n)
{
    vector<string> possiblePaths;
    string path;
    bool visited[n][5];
    memset(visited, false, sizeof(visited));
    pathFollow(0, 0, m, n, path, possiblePaths, visited);
    for (int i = 0; i < possiblePaths.size(); i++) cout << possiblePaths[i] << " ";
}

int main()
{
    int m[5][5] = { { 1, 0, 0, 0, 0 },{ 1, 1, 1, 1, 1 },{ 1, 1, 1, 0, 1 },{ 0, 0, 0, 0, 1 },{ 0, 0, 0, 0, 1 } };
    int n = sizeof(m) / sizeof(m[0]);
    printPath(m, n);
    return 0;
}
