
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

void insertData(Node* root, int x){
    vector<Node*> v;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
            pair<Node*, int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();
            if(level == x){
                v.push_back(node);
            }
            if(node->left){
                q.push({node->left, level + 1});
            }
            if(node ->right){
                q.push({node->right, level + 1});
            }
    }
    if(v.empty()){
        cout<<"Invalid";
        return;
    }
    for(Node* vl:v){
        cout<<vl->val<<" ";
    }
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
    int x ;
    cin>>x;


    insertData(root, x);

    return 0;
}


