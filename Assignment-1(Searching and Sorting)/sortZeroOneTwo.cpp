#include <bits/stdc++.h> 
using namespace std; 
  
void sortzeroOneTwo(vector<int>& a, int arr_size) 
{ 
    int left = 0; 
    int right = arr_size - 1; 
    int mid = 0; 
    while (mid <= right) { 
        switch (a[mid]) { 
        case 0: 
            swap(a[left++], a[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swap(a[mid], a[right--]); 
            break; 
        } 
    } 
}
 
void printArray(vector<int>& elements, int arr_size) 
{ 
    for (int i = 0; i < arr_size; i++) cout << elements[i] << " "; 
} 
  
int main() 
{ 
    vector<int> elements = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = elements.size(); 
    sortzeroOneTwo(elements, n); 
    cout << "array after segregation "; 
    printArray(elements, n); 
    return 0; 
} 