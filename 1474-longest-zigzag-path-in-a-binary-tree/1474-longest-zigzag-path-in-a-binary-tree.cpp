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
    void dfs(TreeNode* root, bool isLeft, int len, int& count) {
        if (!root) {
            return;
        }

        count = max(count, len);

        if (isLeft) {
            dfs(root->right, false, len + 1, count);
            dfs(root->left, true, 1, count);
        } else {
            dfs(root->left, true, len + 1, count);
            dfs(root->right, false, 1, count);
        }
    }

    int longestZigZag(TreeNode* root) {
        int count = 0;

        dfs(root->left, true, 1, count);
        dfs(root->right , false , 1 , count);

        return count;
    }
};