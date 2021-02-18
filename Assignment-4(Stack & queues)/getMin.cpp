#include<bits/stdc++.h>
using namespace std;

int getMini=0;
void push(stack<int>& s, int a){
	if(s.empty()){
	    s.push(a);
	    getMini = a;
	}else{
	    if(a >= getMini){
	        s.push(a);
	    }else{
	        s.push(2*a-getMini);
	        getMini = a;
	    }
	}
}

bool isFull(stack<int>& s,int n){
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
	if(s.empty()){
	    return 0;
	}else{
	    int top = s.top();
	    if(top >= getMini){
	        s.pop();
	    }else{
	        getMini =2*getMini - top;
	        s.pop();
	        return top;
	    }
	}
	
}

int getMin(stack<int>& s){
	return getMini;
}

int main(){
    stack<int> st;
    push(st,1);
    push(st,-2);
    push(st,-3);
    push(st,0);
    push(st,5);
    cout<<getMin(st)<<endl;
    int del = pop(st);
    del = pop(st);
    del = pop(st);
    cout<<getMin(st)<<endl;
}