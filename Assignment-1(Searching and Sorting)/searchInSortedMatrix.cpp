#include<bits/stdc++.h>
using namespace std;

int search(vector<vector<int>> matrix, int size, int key)
{
    if (size == 0){
        return -1;
    }
    int smallest = matrix[0][0], largest = matrix[size - 1][size - 1];
    if (key < smallest || key > largest)
        return -1;
    int i = 0, j = size - 1; 
    while (i < size && j >= 0) 
    {
        if (matrix[i][j] == key){
            cout << "Found"
                 << i << ", " << j;
            return 1;
        }
        if (matrix[i][j] > key)
            j--;
        else
            i++;
    }
    cout << "Not found";
    return 0;
}

int main(){
    vector<vector<int>> matrixrix = { {10, 20, 30, 40},{15, 25, 35, 45},{27, 29, 37, 48},{32, 33, 39, 50}};

    int findElement = 29;
    vector<int> result = findElement(matrixrix,findElement);
    cout<<result;
    return 0;
}