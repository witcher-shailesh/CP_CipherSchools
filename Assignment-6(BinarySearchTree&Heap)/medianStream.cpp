#include<bits/stdc++.h>
using namespace std;

class MedianFinder {    

private:
    int i, phase, med;
    priority_queue<int> maxQ;
    priority_queue<int, vector<int>, std::greater<int>> minQ;
    vector <int> LT, GT;
    
public:
    MedianFinder() {
        phase = 0;
    }

    void dump() { 
        while(LT.size() > 0) { 
            maxQ.push(LT[LT.size()-1]); LT.pop_back();
        }
        while(GT.size() > 0) { 
            minQ.push(GT[GT.size()-1]); GT.pop_back();
        }
        maxQ.push(med);
        while(minQ.size() > maxQ.size()) {
            maxQ.push(minQ.top()); minQ.pop();
        }
        while((maxQ.size()-minQ.size()) > 2) {
            minQ.push(maxQ.top()); maxQ.pop();
        }
        if(maxQ.size() > minQ.size()) {
            med = maxQ.top(); maxQ.pop();
        } else {
            med = minQ.top(); minQ.pop();
        }
    }
    
    void addNum(int num) {
        switch(phase) {
            case 0:
                med = num;
                phase = 1;
                break;
            case 1:
                if(num < med) {
                    LT.push_back(num);
                    if(!GT.empty()) {
                        maxQ.push(LT[LT.size()-1]); LT.pop_back();
                        minQ.push(GT[GT.size()-1]); GT.pop_back();
                    }
                    if(LT.size() > 31) {
                        dump();
                    }
                } else {
                    GT.push_back(num);
                    if(!LT.empty()) {
                        maxQ.push(LT[LT.size()-1]); LT.pop_back();
                        minQ.push(GT[GT.size()-1]); GT.pop_back();
                    }
                    if(GT.size() > 31) {
                        dump();
                    }
                }
                break;
        } 
    }
    
    double findMedian() {
        if(phase == 0) { return 0.0; }
        dump();
        if(maxQ.size() == minQ.size()) { return (double) med; }
        return ((double)(maxQ.top() + med) / 2.0);
    } 
};