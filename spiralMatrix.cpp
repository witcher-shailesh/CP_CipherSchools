#include <bits/stdc++.h> 
using namespace std; 

vector<int> spiralOrder(vector<vector<int>>& vec) {
    int m = vec[0].size(),n= vec.size();
        vector<int> ans;
    if(n==1 && m==1){
        ans.push_back(vec[0][0]);
        return ans;
    }
    int left = 0,right = m-1,bottom = n-1,top = 0,num=0;
    
    while(top<=bottom && left<=right){
        
        for(int i = left;i<=right;i++){
            //cout<<vec[top][i]<<" (1) ";
            num++;
            ans.push_back(vec[top][i]);
        }
        top++;cout<<endl;      
        for(int i = top;i<=bottom;i++){
            num++;
            //cout<<vec[i][right]<<" (2) ";
            ans.push_back(vec[i][right]);
        }
        right--;
        //cout<<endl;        
        if(top<=bottom){
        for(int i = right;i>=left;i--){
            num++;
            //cout<<vec[bottom][i]<<" (3) ";
            ans.push_back(vec[bottom][i]);
        }
        bottom--;//cout<<endl;
        }
        if(left<=right){
        for(int i = bottom ; i>=top;i--){
            num++;
            //cout<<vec[i][left]<<" (4) ";
            ans.push_back(vec[i][left]);   
        }
        left++;//cout<<endl;
        }
    }
}   

int main(){
    vector<vector<int>> matrixrix = { {10, 20, 30, 40},{15, 25, 35, 45},{27, 29, 37, 48},{32, 33, 39, 50}};
    vector<int> result = spiralOrder(matrixrix);
    for(int it : result) cout<<it<<" ";
}
