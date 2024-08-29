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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (!root)
            return {};

        vector<vector<int>> levels;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* currNode = q.front();
                q.pop();

                level.push_back(currNode->val);

                if (currNode->left) {
                    q.push(currNode->left);
                }

                if (currNode->right) {
                    q.push(currNode->right);
                }

                
            }

            levels.push_back(level);
        }

        reverse(levels.begin() , levels.end());

        return levels;

    }
};