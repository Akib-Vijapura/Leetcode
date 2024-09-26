class Solution {
public:
    int distinctAverages(vector<int>& nums) {
       unordered_set<double> avg;

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            double average = (nums[i] + nums[j]) / 2.0;

            avg.insert(average);

            i++;
            j--;
        }

        return avg.size();
    }
};