class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 1) {
            return 0;
        }

        int maxi = nums[0];
        int mini = nums[0];

        for (int i = 1; i < n; i++) {
            if (mini > nums[i]) {
                mini = nums[i];
            }
        }

        for (int i = 1; i < n; i++) {
            if (maxi < nums[i]) {
                maxi = nums[i];
            }
        }

        mini = mini + k;
        maxi = maxi - k;

        int diff = maxi - mini;

        if (diff < 0) {
            return 0;
        }

        return diff;
    }
};