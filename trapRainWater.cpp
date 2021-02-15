#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int m=height.size();
    if(m==0){
        return 0;
    }
    int lmax[m];
    int rmax[m];
    lmax[0]=height[0];rmax[m-1]=height[m-1];
    int ans=0;
    for(int i=1;i<m;i++){
        if(height[i]>lmax[i-1]){
            lmax[i]=height[i];
        }else{
            lmax[i]=lmax[i-1];
        }
    }
    for(int i=m-2;i>=0;i--){
        if(height[i]>rmax[i+1]){
            rmax[i]=height[i];
        }else{
            rmax[i]=rmax[i+1];
        }
    }
    for(int i=0;i<m;i++){
        if(lmax[i]<rmax[i]){
            ans+=(lmax[i]-height[i]);
        }else{
            ans+=(rmax[i]-height[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(heights);
}