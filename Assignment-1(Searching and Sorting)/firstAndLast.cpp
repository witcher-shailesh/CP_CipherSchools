#include <bits/stdc++.h>
using namespace std;

int firstOcc(int elements[], int x, int n)
{
    int left = 0, right = n - 1, ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (elements[mid] > x)
            right = mid - 1;
        else if (elements[mid] < x)
            left = mid + 1;
        else {
            ans = mid;
            right = mid - 1;
        }
    }
    return ans;
}
 
int lastOcc(int elements[], int x, int n)
{
    int left = 0, right = n - 1, ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (elements[mid] > x)
            right = mid - 1;
        else if (elements[mid] < x)
            left = mid + 1;
        else {
            ans = mid;
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int elements[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(elements) / sizeof(int);
 
    int x = 8;
    cout<<"First Occurrence = "<<firstOcc(elements, x, n));
    cout<<"Last Occurrence = "<<lastOcc(elements, x, n));
 
    return 0;
}