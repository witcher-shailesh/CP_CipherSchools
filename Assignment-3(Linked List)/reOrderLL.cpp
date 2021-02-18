#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int data;
    ListNode *next;
    ListNode(int data){
        this->data = data;
        this->next = NULL;
    }
};

ListNode* reverseLinkList(ListNode *head){
        ListNode* prev = NULL, *curr = head , *next = head;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
int lengthLL(ListNode *head){
    ListNode* temp = head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp= temp->next;
    }
    return count;
}

void print(ListNode* head){
    while(head!=NULL){
        cout<<head->val;
        head=head->next;
    }
}

ListNode* cutIntoHalf(ListNode *head ,int cutHalf){
    ListNode* temp = head;
    while(temp!=NULL && cutHalf!=1){
        temp=temp->next;
        cutHalf--;
    }
    return temp->next;
}

ListNode* cutIntoHalfFirst(ListNode *head ,int cutHalf){
    ListNode* temp = head;
    while(temp!=NULL && cutHalf!=1){
        temp=temp->next;
        cutHalf--;
    }
    temp->next = NULL;
    return head;
}

ListNode* mergeLL(ListNode* A,ListNode* B){
    if(A == NULL){
        return B;
    }else if(B == NULL){
        return A;
    }
    else{
        ListNode *p,*q;
        while(A!=NULL && B!=NULL){
            p = A->next;
            q = B->next;
            A->next = B;
            A = p ;
            B->next = A;
            B= q;
        }
    }
    return A;
}

void reorderList(ListNode* head) {
    if(head==NULL) return;
    int cutHalf = (lengthLL(head)/2)+1;
    ListNode* temp = head;
    ListNode* second = cutIntoHalf(temp,cutHalf);
    ListNode* first = cutIntoHalfFirst(head,cutHalf);
    second = reverseLinkList(second);
    print(second);
    cout<<endl;
    print(first);
    head = mergeLL(first,second);
    
}

int main(){
    ListNode* head = NULL;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    reorderList(head);
    print(head);
}