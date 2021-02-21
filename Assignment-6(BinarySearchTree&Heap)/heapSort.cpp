#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int arr_len,int i) 
{ 
    int rootLargest = i;
    int lchild = 2 * i; 
    int rchild = (2 * i) + 1; 
  
    if (lchild < arr_len && arr[lchild] > arr[rootLargest]) 
        rootLargest = lchild; 
  
    if (rchild < arr_len && arr[rchild] > arr[rootLargest]) 
        rootLargest = rchild; 
  
    if (rootLargest != i) 
    { 
        swap(arr[i], arr[rootLargest]); 
  
        heapify(arr, arr_len, rootLargest); 
    } 
} 

int main()
{
  int arr[] = {0,5,3,2,1,7,6,10};
  int arr_len = sizeof(arr)/sizeof(arr[0]);
  for (int i = arr_len / 2 - 1; i >= 1; i--) heapify(arr,arr_len,i);   
  for(int i=1;i<arr_len;++i)cout<<arr[i]<<" ";
}