
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){

        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(TreeNode* root){
    if(root ==  NULL) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
        TreeNode* root = new TreeNode(10);
        TreeNode* a = new TreeNode(20);
        TreeNode* b = new TreeNode(30);
        TreeNode* c = new TreeNode(40);
        TreeNode* d = new TreeNode(50);
        TreeNode* e = new TreeNode(60);
        TreeNode* f = new TreeNode(70);
        TreeNode* g = new TreeNode(80);
        root->left =a;
        root->right = b;
        a->left = c;
        a->right = e;
        e->right = d;
        b->left = f;
        b->right = g;

        preOrder(root);

    return 0;
}

