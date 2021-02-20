#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    if(nums.size()==0) return -1;
    priority_queue<int , vector<int>,greater<int>> q;
    for(int i : nums){
        q.push(i);
        if(q.size()>k){
            q.pop();
        }
    }
    return q.top();
}

int main(){
    vector<int> check = {1,3,4,4,2,1,4,7,98,6,4,3,2};
    int k =4;
    cout<<findKthLargest(check,k)<<" " ; 
    return 0;
}