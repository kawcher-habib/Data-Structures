/** LeetCode problem-700
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* res = NULL;
    TreeNode* result(TreeNode* root, int val){
       if(root == NULL) return NULL;
       if(root->val == val){
        res = root;
       }
       else if(root->val > val){
            result(root->left, val);
       }else{
        result(root->right, val);
       }
    return res;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return result(root, val);
    }
};