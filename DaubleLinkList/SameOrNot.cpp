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
int getLength(Node* head){
    Node* tmp = head;
    int couts = 0;

    while(head != NULL){
        couts++;
        head = head->next;
    }
    return couts;
}
void print_normal(Node* head, Node* head2){
    Node* tmp = head;
    bool flag = true;
    if(getLength(head) != getLength(head2)){
        return;
    }else{
        while(tmp != NULL && head2 !=NULL){
                if(tmp->val != head2->val){
                    flag = false;
                    break;
                }
            tmp = tmp->next;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int n,n2;
    while(true){

    cin>>n>>n2;
    if(n == -1 && n2 == -1){
        break;
    }
        insertData(head, tail,n);
       insertData(head2, tail2,n2);
    }

    print_normal(head, head2);
   // print_normal(head2);
}
