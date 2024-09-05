class Solution {
public:
    vector<int> minDifference(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int prefix[n + 1][101];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 101; j++) {
                prefix[i + 1][j] = prefix[i][j];
            }
            ++prefix[i + 1][nums[i]];
        }

        vector<int> ans(queries.size());

        for(int i = 0 ; i < queries.size() ; i++){
            int l = queries[i][0]+1;
            int r = queries[i][1]+1;

            vector<int> present;

            for(int k = 1 ; k < 101 ; k++){
                if(prefix[r][k] - prefix[l-1][k] > 0){
                    present.push_back(k);
                }
            }

            int diff = present.size() == 1 ? -1 : INT_MAX;

            for(int k = 1 ; k < present.size() ; k++){
                diff = min(diff , present[k] - present[k-1]);
            }

            ans[i] = diff;
        }

        return ans;
    }
};