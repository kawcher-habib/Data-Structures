#include<bits/stdc++.h>
using namespace std;
class Node {

public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insertData(Node* &head, int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }
        newNode= head->next;

        cout<<head->val<<" ";
        cout<<head->next->val<<" ";
        cout<<head->next->next->val;

}
int main(){
    int n;
    Node* head = NULL;
    while(true){
            cin>>n;
        if(n == -1)break;

        insertData(head, n);

    }


}
