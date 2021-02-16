#include<bits/stdc++.h>
using namespace std;

int findMajorityElementHelper(vector<int> elements){
    int letMajor = elements[0];
    int n = elements.size(),countSoFar = 1;
    for(int i =1;i<n;i++){
        if(letMajor == elements[i]){
            countSoFar+=1;
        }else{
            countSoFar-=1;
        }
        if(countSoFar==0){
            countSoFar = 1;
            letMajor = elements[i];
        }
    }
    return letMajor;
}

int findMajorityElement(vector<int>& elements){
    int maj = findMajorityElementHelper(elements);
    return maj;
}

int main(){
    vector<int> elements = {1,1,1,1,1,1,1,1,1,2,2,2,2,3,3,2,2,2,2,2,2,4,4,4,4,1,1,2,2,2,2,2,2,2,2,2,2,2};
    int majElement = findMajorityElement(elements);
    cout<<majElement;
    return 0;
}