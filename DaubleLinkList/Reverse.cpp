
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
void insertData(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
       tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void print_normal(Node* tail){

    while(tail != NULL){
        cout<<tail->val<<",";
        tail = tail->prev;
    }
}
int getLength(Node* head){
    Node* tmp = head;
    int couts = 0;

    while(head != NULL){
        couts++;
        head = head->next;
    }
    return couts;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    while(true){

    cin>>n;
    if(n == -1){
        break;
    }
        insertData(head, tail,n);
    }

    print_normal(tail);
   // print_normal(head2);
}
