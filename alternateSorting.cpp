#include <bits/stdc++.h> 
using namespace std; 
  
void alternateSort(int elements[], int n) { 
    sort(elements, elements+n);  
    int i = 0, j = n-1; 
    while (i < j)   cout<<elements[j--]<< " "<<elements[i++]<< " ";
    if (n % 2 != 0) cout << elements[i]; 
} 
int main() { 
    vector<int> elements = {1, 12, 4, 6, 7, 10}; 
    int n = elements.size();
    alternateSort(elements, n); 
    return 0; 
} 