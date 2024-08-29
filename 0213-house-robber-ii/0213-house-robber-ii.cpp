class Solution {
public:
    int rob(vector<int>& nums) {



        int rob1 = 0;
        int rob2 = 0;
        int maxAmount1 = nums[0];
        int maxAmount2 = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            maxAmount1 = max(rob1 + nums[i], rob2);
            rob1 = rob2;
            rob2 = maxAmount1;
        }

        rob1 = 0;
        rob2 = 0;

        for (int i = 1; i < nums.size(); i++) {
            maxAmount2 = max(rob1 + nums[i], rob2);
            rob1 = rob2;
            rob2 = maxAmount2;
        }

        return max(maxAmount1, maxAmount2);
    }
};