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

int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void deleteData(Node* &head, int pos){
    Node* temp = head;
    int length = size(head);
    if(pos >= length){
        return;
    }else if(pos == 0){
        Node* deleteMe = head;
        head = head->next;
        delete deleteMe;
    }else{
        for(int i = 1; i < pos; i++){
            temp = temp->next;
        }
        Node* deleteMe = temp->next;
        temp->next = temp->next->next;
        delete deleteMe;
    }

}


void insertData(Node* &head, int x, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }

    if (x == 0) {
        newNode->next = head;
        head = newNode;
    } else if (x == 1) {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    } else if (x == 2) {
        deleteData(head, v);
    }
}



void printData(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    int q;
    cin >> q;
    while(q > 0){
        int x, v;
        cin >> x >> v;
        insertData(head, x, v);
        printData(head);
        q--;
    }

    return 0;
}
