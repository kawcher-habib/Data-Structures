#include <bits/stdc++.h>
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
void insertData(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}


int findANum(Node* head, int x) {
    int counts = 0;
    while (head != NULL) {
        if (head->val == x) {
            return counts;
        } else {

            counts++;
        }
        head = head->next;
    }

    return -1;
}


int main() {
    int t;
    cin >> t;

    while (t > 0) {

    Node* head = NULL;
    Node* tail = NULL;
        int n, x;
        while(true){
                cin >> n;
            if (n == -1) {
                break;
            }
            insertData(head, tail, n);
        }
        cin>>x;
       int res = findANum(head, x);
      cout<<res<<endl;
        t--;
    }

    return 0;
}
