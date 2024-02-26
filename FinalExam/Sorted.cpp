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

void insertData(Node* &head, int val){
    Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* tmp = head;
        while(tmp->next !=NULL){
            tmp = tmp->next;
        }
    tmp->next = newNode;

}
void sortedData(Node* head){
    for(Node* i = head; i->next !=NULL; i = i->next){
        for(Node* j = i->next; j !=NULL; j= j->next){
                if(i->val > j->val){
                    swap(i->val, j->val);
                }

        }
    }
}
void remDupData(Node* head){

    if (head == NULL){
            return;
    }
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val)
            {
                Node *deleteData = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteData;
            }
            if (tmp->next == NULL){
                break;
            }else if (tmp->val != tmp->next->val)
            {
                tmp = tmp->next;
            }
        }
}
void printData(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
            cout<<tmp->val<<" ";
            tmp = tmp->next;

    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
            Node* head = NULL;
        int n;
        cin>>n;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            insertData(head, x);
        }
       sortedData(head);
       remDupData(head);
        printData(head);
    }



}

