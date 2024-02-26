#include<bits/stdc++.h>
using namespace std;
class Node{

public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val= val;
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
    tail->next= newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void sortData(Node* head){
    Node* tmp = head;
   for(Node* i = tmp; i->next != NULL; i = i->next){
    for(Node* j = i->next; j!= NULL; j = j->next){
        if(i->val > j->val){
            swap(i->val, j->val);
        }
    }

   }

}
void printData(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
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
    insertData(head, tail, n);
}
sortData(head);
printData(head);

}
