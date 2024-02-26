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
void insertData(Node* &head, int val) {
    Node* newNode = new Node(val);
    Node* tmp = head;

    if (tmp == NULL) {
        // If the list is empty, set the head to the new node
        head = newNode;
    } else {
        // Traverse the list to find the last node
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        // Update pointers to insert the new node at the end
        tmp->next = newNode;
        newNode->prev = tmp;
    }
}
void print_normal(Node* head){
    Node * t = head;
    while(tmp != NULL){
        cout<<tmp->val;
        tmp = tmp->next;
    }
}
int main(){
    Node* head = NULL;
    int n ;
    while(true){
            cin>>n;
            if(n == -1){
                break;
            }
            insertData(head, n);
    }
    print_normal(head);
}
