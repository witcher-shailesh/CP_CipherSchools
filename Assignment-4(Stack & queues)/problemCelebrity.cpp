#include<bits/stdc++.h>
using namespace std;

int getId(int M[MAX][MAX], int n)
{
   int i,j,q;
   int c=0;
   for(i=0;i<n;i++)
   {
    c=0;   
       for(j=0;j<n;j++)
       {
           if(M[i][j]==0)
           c++;
           else break;
               
       }
       if(c==n){
       q=i;break;}
       else {continue;}
   }
   c=0;
   for(i=0;i<n;i++)
   {
       if(i==q)
       continue;
       else
       {
        if(M[i][q]==1)
        c++;
       }
   }
    if(c==n-1)
    return q;
    else
    return -1;
}

int main(){
    int M[][] = {{0 1 0},{0 0 0}, {0 1 0}};
    int k =3;
    cout<<getId(M,k);
}