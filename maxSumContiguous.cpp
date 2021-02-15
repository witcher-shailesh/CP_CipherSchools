#include<bits/stdc++.h>
using namespace std;
 
int maxSubArraySum(vector<int>& elements,  int size){
    int maxSoFar = INT_MIN, notMax = 0,start =0, end = 0, s=0;
    for (int i=0; i< size; i++ ){
        notMax += elements[i];
        if (maxSoFar < notMax){
            maxSoFar = notMax;
            start = s;
            end = i;
        }
        if (notMax < 0){
            notMax = 0;
            s = i + 1;
        }
    }
    cout << maxSoFar << endl;
}
 
int main()
{
   vector<int> elements = {-22, 3, -90, 41, 5, 1, 5, -3};
    int n = elements.size();
    int max_sum = maxSubArraySum(elements, n);
    return 0;
}