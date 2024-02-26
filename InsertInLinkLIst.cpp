#include<bits/stdc++.h>
using namespace std;
class Node{

public:
    int val;
    Node* next;
Node(int val){
    this->val = val;
    this->next = NULL;
};
};
void InsterAtTail(Node* &head, int val){
    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
       temp = temp->next;

    }
    temp->next = n;
    cout<<temp->next->val<<" ";

}
void InsertAtHead(Node* &head, int val){
    Node* fastIn = new Node(val);
    Node* temps = head;

        fastIn->next= head;
       // temps = temps->next;

    cout<<fastIn->val<<" ";
    cout<<fastIn->next->val;
    cout<<fastIn->next->next->val;

}
int main(){

    Node* head = new Node(30);
    Node* a = new Node(60);
    head->next =a;

    //InsterAtTail(head, 50);
    InsertAtHead(head, 100);

   //cout<<head->next->val<<" ";

}
