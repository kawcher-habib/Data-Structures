#include<bits/stdc++.h>
using namespace std;
class Node {

public:
    int val;
    Node* next;

Node(int val){
    this->val = val;
    this->next = NULL;
};
};
void printfData(Node* head){

Node* temp = head;
    while(head != NULL){

        cout<<temp->val<<" ";
      temp = temp->next;
    }
    cout<<endl;
};

void insertData(Node* head, int pos, int val){
    Node* newNode = new Node(val);
        Node* temp = head;
    for(int i = 1; i<=pos-1; i++){

        temp = temp->next;
    }

    temp->next = newNode;
      newNode->next = temp->next;
    cout<<temp->next->val;

}

int size(Node* head){

Node* tmp = head;
int count = 0;
while(tmp != NULL){
    count++;
    tmp = tmp->next;
}
return count;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(60);
    Node* c = new Node(70);
    head->next = a;
    a->next = b;
    b->next = c;

    //printfData(head);
    insertData(head, 3, 90);
    int res = size(head);
    cout<<res<<"HH";

    return 0;
}
