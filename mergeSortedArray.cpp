#include<bits/stdc++.h> 
using namespace std; 
  
void mergeArrays(int first[], int second[], int n, int m)  
{   map<int, bool> map; 
    for(int i = 0; i < n; i++) 
    map[first[i]] = true; 
    for(int i = 0;i < m;i++) 
    map[second[i]] = true; 
    for(auto i: map) 
    cout<< i.first <<" "; 
} 
int main() {  
    int first[] = {1, 3, 5, 7}, second[] = {2, 4, 6, 8}; 
    int size = sizeof(first)/sizeof(int); 
    int size1 = sizeof(second)/sizeof(int); 
    mergeArrays(first, second, size, size1); 
    return 0; 
} 