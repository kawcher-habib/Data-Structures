#include <bits/stdc++.h>
using namespace std;
class Node{

public:
    int val;
    Node* next;
Node(int val){
        this->val= val;
        this->next = NULL;
}

};
void insertData(Node* &head, Node* &tail, int val){
       Node* newNode = new Node(val);
    if(head== NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

};

int maxValue(Node* head){

Node* temp = head;
int maxNum = temp->val;
    while(temp != NULL){
        if(maxNum < temp->val){
            maxNum = temp->val;
        }
         temp = temp->next;
    }
return maxNum;
};
int minValue(Node* head){

Node* temp = head;
int minNum = temp->val;
    while(temp != NULL){
        if(minNum > temp->val){
            minNum = temp->val;
        }
         temp = temp->next;
    }
return minNum;
};

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
 int maxNum = maxValue(head);
   int minNum = minValue(head);
  cout<< maxNum - minNum;
}



