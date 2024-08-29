class Solution {
public:
    void backTrack(vector<int>& candidates, int target, int index,
                   vector<int>& combinations, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(combinations);
            return;
        } else if (target < 0) {
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            combinations.push_back(candidates[i]);
            backTrack(candidates, target - candidates[i], i, combinations, ans);
            combinations.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combinations;

        backTrack(candidates, target, 0, combinations, ans);

        return ans;
    }
};