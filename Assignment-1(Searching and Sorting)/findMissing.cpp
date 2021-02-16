#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(int nums[],int n) {
        bool one = false;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                one = true;
            }
        }if(one==false){
            return 1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            int idx= abs(nums[i]);
            if(idx<n){
                nums[idx] = -1*abs(nums[idx]);
            }else{
                nums[0] = -1*abs(nums[0]);
            }
        }
        
        for(int i=1;i<n;i++){
            if(nums[i]>0){return i;}    
        }
        if(nums[0]>0){return n;}
        return n+1;
    }

    int main(){
        int elements[] = {3,4,-1,1};
        int n = sizeof(elements)/sizeof(elements[0]);
        cout<< firstMissingPositive(elements,size);
        return 0;
    }