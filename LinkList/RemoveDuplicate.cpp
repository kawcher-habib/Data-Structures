#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


void insertData(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
 void  removeDuplicateData(Node* head){
     for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL;) {
            if (i->val == j->val) {
                Node* deleteData = j;
                j = j->next;
                delete deleteData;
            } else {
                j = j->next;
            }
        }
    }
}

void printList(Node* head) {
    Node* temp = head;
   while(temp != NULL){
       cout<<temp->val<<" ";
       temp = temp->next;
   }

}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int n;

    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        insertData(head, tail,n);
    }
    removeDuplicateData(head);

    printList(head);

    return 0;
}
