/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void findSum(TreeNode* root, int currSum, int& totalSum) {

        // check if root is null
        if (root == nullptr) {
            return;
        }

        // if we reach to the leaf node that add counted sum (currSum) to totalSum
         
        if (root->left == nullptr && root->right == nullptr) {
            totalSum += (currSum * 10) + root->val;
        }

        //Calculate currSum
        currSum = (currSum * 10) + root->val;

        //goto left part of tree
        findSum(root->left , currSum , totalSum);

        //goto right part of tree
        findSum(root->right , currSum , totalSum);
    }

    int sumNumbers(TreeNode* root) {
        int totalSum = 0;

        findSum(root, 0, totalSum);

        return totalSum;
    }
};