/**
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

    bool solve(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr && subRoot == nullptr){
            return true;
        }

        if(root == nullptr || subRoot == nullptr){
            return false;
        }

        if(root->val != subRoot->val){
            return false;
        }

        return solve(root->left , subRoot->left) && solve(root->right , subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr){
            return false;
        }

        if(solve(root , subRoot)){
            return true;
        }

        return isSubtree(root->left , subRoot) || isSubtree(root->right , subRoot);
    }
};