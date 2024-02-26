#include<bits/stdc++.h>
using namespace std;
class Node{

public:
    int val;
    Node* next;
    Node* prev;

Node(int val){
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
}
};
void insertData(Node* &head,int pos, int val){
        Node * newNode = new Node(val);
        Node* temp = head;
        for(int i = 1; i<pos; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->next->prev = newNode;
        newNode->prev = temp;
};

void print_next(Node* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void print_prev(Node* tail){
    while(tail != NULL){
            cout<<tail->val<<" ";
        tail = tail->prev;
    }
}
int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    insertData(head, 2, 100);
print_next(head);
print_prev(tail);
    return 0;
}
