#include <bits/stdc++.h>
using namespace std;

int countInversion(vector<int> elements, int n)
{
    int countINV = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (elements[i] > elements[j])
                countINV++;
 
    return countINV;
}

int main()
{
    vector<int> elements = { 1, 20, 6, 4, 5 };
    int n = elements.size();
    cout << countInversion(elements, n);
    return 0;
}