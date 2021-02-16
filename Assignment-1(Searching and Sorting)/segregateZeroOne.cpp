#include <bits/stdc++.h> 
using namespace std; 

void segregateZeroOne(int arr[],int size){ 
    int zeros = 0; 
    int ones = size - 1; 
      
    while(zeros < ones) 
    { 
        if(arr[zeros] == 1) 
        { 
            swap(arr[zeros],  
                 arr[ones]); 
            ones--; 
        } 
        else
        zeros++; 
    } 
} 
  
int main() { 
    int arr[] = {0, 1, 0, 1, 1, 1}; 
    int i, arrSize = sizeof(arr) / sizeof(arr[0]); 
  
    segregateZeroOne(arr, arrSize); 
    for (i = 0; i < arrSize; i++) 
        cout << arr[i] << " "; 
  
    return 0; 
} 