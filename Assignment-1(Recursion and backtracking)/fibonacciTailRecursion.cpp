#include<bits/stdc++.h>
using namespace std;

int fibonacci(int a,int b,int number){
    if(number==0){
        return a;
    }
    if(number==1){
        return  b;
    }
    return fibonacci(b,a+b,number-1);


}

int main(){
    int number = 10;
    cout<<fibonacci(0,1,number);
    return 0;
}