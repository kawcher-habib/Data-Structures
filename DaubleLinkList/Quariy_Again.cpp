#include <bits/stdc++.h>
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
int size(Node* head){
    int cnt = 0;
    Node* tmp = head;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insertData(Node* &head, Node* &tail, int x, int val){
    int length = size(head);
    Node* newNode = new Node(val);
    Node* tmp = head;
    if(x>length){
        cout<<"Invalid"<<endl;
    }else if(x == 0){
        if(tmp != NULL){
            tmp = newNode;
            return;
        }
        newNode->next = tmp;
        tmp->prev= newNode;
        tmp = newNode;

    }else{

        for(int i =1; i<x; i++){
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
            newNode->prev = tmp;
    }

}
void print_me(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val;
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    while(q){
        int x, v;
        cin>>x>>v;
        insertData(head, tail, x, v);
        q--;
    }
    print_me(head);
    return 0;
}
