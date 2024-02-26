


#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    };
};

void printLfet(Node* root){
    if(root->left == NULL) return;
    cout<<root->val;
    printLfet(root->left);
}
void printRight(Node* root){
    if(root->right == NULL) return;
    cout<<root->val;
    printRight(root->right);
}
int main()
{
    // Write your code here
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root= NULL;
    else root = new Node(val);

    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        int l, r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }

    if(root->left != NULL){
        printLfet(root);
    }
    if(root->right != NULL){
        printRight(root);
    }
    return 0;
}

