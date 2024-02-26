#include<bits/stdc++.h>
using namespace std;
class Node{

public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insertdata(Node* head, int index){

        Node* temp = head;

        Node* toDeletion = head;
        delete toDeletion;
        temp->next = temp->next;

    cout<<temp->val<<" ";
    cout<<temp->next->val<<" ";
    cout<<temp->next->next->val;
}
int main(){

Node* head = new Node(30);
Node* a = new Node(40);
Node* b = new Node(60);
    head->next = a;
    a->next = b;

    insertdata(head, 0);

    return 0;

}
