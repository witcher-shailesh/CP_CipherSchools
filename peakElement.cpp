#include<bits/stdc++.h>
using namespace std;

int findPeakElementHelper(vector<int>& elements , int start, int end,int n){
    int mid = end + (start-end)/2;
    if((mid == 0 || elements[mid-1]<=elements[mid]) && (mid==n-1 || elements[mid+1]<=elements[mid])){
        return elements[mid];
    }else if(mid>0 && elements[mid]<elementds[mid+1]){
        return findPeakElementHelper(elements,mid+1,end,n);
    }else{
        return findPeakElementHelper(elements,start,mid-1,n);
    }   
}

int findPeakElement(vector<int>& elements){
    int start = 0, end = elements.size()-1;
    int peakElement = findPeakElementHelper(elements,start,end,elements.size());
    return peakElement;
}

int main(){
    vector<int> elements = {1,2,3,4,5,4,3,2,1};
    int result = findPeakElement(elements);
    cout<<result;
}