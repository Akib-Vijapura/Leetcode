class Solution {
public:
    int countElements(vector<int>& nums) {

        int n = nums.size();
        int j = 0;
        int count = 0;

        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        while (j < n) {
            if ((nums[j] > mini) && (nums[j] < maxi)) {
                count++;
            }
            j++;
        }

        return count;
    }
};