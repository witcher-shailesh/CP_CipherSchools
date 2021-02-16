#include <bits/stdc++.h>
using namespace std;

void findMaximumNum(
    string stringStr, int k,
    string& max, int ctr)
{
    if (k == 0) return;
    int n = stringStr.length();
    char maxi = stringStr[ctr];
    for (int j = ctr + 1; j < n; j++) {
        if (maxi < stringStr[j]) maxi = stringStr[j];
    }
    if (maxi != stringStr[ctr]) --k;
 
    for (int j = ctr; j < n; j++) {
        if (stringStr[j] == maxi) {
            swap(stringStr[ctr], stringStr[j]);
            if (stringStr.compare(max) > 0) max = stringStr;
            findMaximumNum(stringStr, k, max, ctr + 1);
            swap(stringStr[ctr], stringStr[j]);
        }
    }
}
 
int main(){
    string stringStr = "129814999";
    int k = 4;
    string max = stringStr;
    findMaximumNum(stringStr, k, max, 0);
    cout << max << endl;
    return 0;
}