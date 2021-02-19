#include <bits/stdc++.h> 
using namespace std; 

void immediateSmaller(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            arr[i] = arr[i + 1];
        } else
            arr[i] = -1;
    }
    arr[n - 1] = -1;
}

int main(){
    vector<int> arr = {4, 2, 1, 5, 3};
    immediateSmaller(arr);
    for(int i : arr){
        cout<<i;
    }
}