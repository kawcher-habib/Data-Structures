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

void insertData(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_res(Node* head, Node* tail){
    Node* headTmp = head;
    Node* tailTmp = tail;
    bool flag = true;
    while(headTmp != NULL){
        if(headTmp->val != tailTmp->val){
            flag = false;
            break;
        }
        headTmp = headTmp->next;
        tailTmp = tailTmp->prev;
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main()
{
    // Write your code here
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
    print_res(head, tail);
    return 0;
}
