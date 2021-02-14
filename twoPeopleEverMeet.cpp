#include<bits/stdc++.h>
using namespace std;

bool canMeet(int distA, int distB, int velA, int velB){
    if(distA<=distB && velA < velB || distB<=distA && velB < velA){
        return false;
    }
    if(distA<distB){
        swap(distA,distB);
        swap(velB,velA);
    }
    return ((distA-distB)%(velA-velB))==0;
}

int main(){

    int distanceA = 10 , distanceB = 20 , velA = 5 , velB = 4;

    if(canMeet(distanceA,distanceB,velA,velB)){
        cout<<"Yes, they can meet";
    }else{
        cout<<"No, they can't meet";
    }
    return 0;
}