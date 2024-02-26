
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
int Size(Node* head){
   int couts = 0;
   while(head != NULL){
    couts++;
    head = head->next;
   }
   return couts;
}

void insertData(Node* &head, int x, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    if(x >= Size(head)){
        cout<<"Invalid Index";
        return;
    }else if(x == 0){
        newNode->next = head;
        head->prev= newNode;
        head = newNode;
    }else{
        for(int i = 1; i<x; i++){
            head = head->next;
        }
        newNode->next = head->next
        head->prev = newNode;
        newNode->prev = head;
        head = newNode;
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

int n;
cin>>n;
while(n >0){
        int x, v;
 cin<<x<<v;
    insertData(head, x,v);
    n--;
}
printData(head);

}
