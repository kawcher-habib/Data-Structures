#include <iostream>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertData(Node* &head, Node* &tail, string val) {
    Node* newNode = new Node(val);
    if (head ==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
}

void print_me(Node* &head, string addr) {
    if (addr == "visit") {
        string url;
        cin>>url;
        Node* tmp = head;
        while (tmp != NULL) {
            if (tmp->val ==url) {
                cout<<tmp->val<<endl;
                head = tmp;
                return;
            }
            tmp = tmp->next;
        }
        cout<<"Not Available"<<endl;
    } else if (addr== "prev") {
        if (head->prev != NULL) {
            cout<<head->prev->val<<endl;
            head=head->prev;
        } else {
            cout<<"Not Available"<<endl;
        }
    } else if (addr== "next") {
        if (head->next != NULL) {
            cout<<head->next->val<<endl;
            head =head->next;
        } else {
            cout<<"Not Available"<<endl;
        }
    }
}

int main() {
    Node* head =NULL;
    Node* tail =NULL;


    string n;
    while (true) {
        cin>>n;
        if (n == "end") {
            break;
        }
        insertData(head, tail, n);
    }


    int q;
    cin>>q;
    while (q >0) {
        string add;
        cin>>add;
        print_me(head, add);
        q--;
    }

    return 0;
}
