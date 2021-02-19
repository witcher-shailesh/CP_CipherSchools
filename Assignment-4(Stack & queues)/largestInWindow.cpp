#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int size = nums.size();
    deque<int> Deque;
    vector<int> sol;
    for (int i = 0; i < size; ++i) {
        if (!Deque.empty() && Deque.front() == i - k) {
            Deque.pop_front();
        }
        while (!Deque.empty() && nums[Deque.back()] < nums[i]) {
            Deque.pop_back();
        }
        Deque.push_back(i);
        if (i >= k - 1) {
            sol.push_back(nums[Deque.front()]);
        }
    }
    return sol;
}

int main(){
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k =3;
    vector<int> res = maxSlidingWindow(arr,k);
    for( int i : res) cout<<i<<" ";
}

