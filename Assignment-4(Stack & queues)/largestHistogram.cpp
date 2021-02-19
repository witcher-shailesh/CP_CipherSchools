#include<bits/stdc++.h>
using namespace std;

int getMaxArea(vector<int> hist){
    int n = hist.size();
    stack<int> s; 
    int maxArea = 0;
    int tp;  
    int topArea;
    int i = 0; 
    while (i < n) { 
        if (s.empty() || hist[s.top()] <= hist[i]) s.push(i++); 
        else
        { 
            tp = s.top(); 
            s.pop();  
            topArea = hist[tp] * (s.empty() ? i :  i - s.top() - 1); 
            if (maxArea < topArea) 
                maxArea = topArea; 
        } 
    } 
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        topArea = hist[tp] * (s.empty() ? i :  i - s.top() - 1); 
        if (maxArea < topArea) maxArea = topArea; 
    } 
    return maxArea; 
}

int main(){
    vector<int> arr = { 1,3,21,3,5,3,6,7};
    cout<<getMaxArea(arr);
}