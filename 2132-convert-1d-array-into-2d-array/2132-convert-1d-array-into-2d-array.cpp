class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n));

        if (m * n != original.size()) {
            return {};
        }

        for (int i = 0; i < m; i++) {
            ans[i] = vector<int>(original.begin() + i * n,
                                 original.begin() + i * n + n);
        }

        return ans;
    }
};