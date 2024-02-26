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
int isSameSize(Node* head){
    int length=0;
    while(head != NULL){
        length++;
    }

    return length;
}
void insertData(Node* &head, Node* &tail, int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
}
void isSame(Node* head1, Node* head2) {
    bool flag = true;

    while (head1 != NULL) {
        if (head1->val != head2->val) {
            flag = false;
            break;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int n, n2;
    while(true){
        cin>>n>>n2;
        if(n == -1){
            break;
        }
        insertData(head, tail, n);
        insertData(head2,tail2, n2);
    }
   int length =isSameSize(head);
   int length2 = isSameSize(head2);
    if(length != length2){
        cout<<"NO";
    }else{
        isSame(head, head2);
    }

}
