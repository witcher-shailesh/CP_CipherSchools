#include <bits/stdc++.h> 
using namespace std; 
 
void permutations(string a, int l, int r) { 
    if (l == r) cout<<a<<endl; 
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
            swap(a[l], a[i]); 
            permutations(a, l+1, r); 
            swap(a[l], a[i]); 
        } 
    } 
} 
int main() 
{ 
    string str = "ABC"; 
    int n = str.size(); 
    permutations(str, 0, n-1); 
    return 0; 
} 