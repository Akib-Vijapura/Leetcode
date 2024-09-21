class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int closest_sum = INT_MAX / 2;

        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int curr_sum = nums[i] + nums[left] + nums[right];

                if (abs(curr_sum - target) < abs(closest_sum - target)){
                    closest_sum = curr_sum;
                }
                
                if (curr_sum < target) {
                    left++;
                } else if (curr_sum > target) {
                    right--;
                } else {
                    return curr_sum;
                }
            }
        }

        return closest_sum;
    }
};