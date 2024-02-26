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
Node* inputData(){
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
    return root;

}
void resultData(Node* root, int& sum){

    if(root == NULL) return;
    if(root->left != NULL || root->right != NULL){

        sum += root->val;


    }
    resultData(root->left, sum);
    resultData(root->right, sum);


}

int main()
{
    // Write your code here
    Node* root = inputData();
    int sum = 0;
    resultData(root, sum);
    cout<<sum;
    return 0;
}

