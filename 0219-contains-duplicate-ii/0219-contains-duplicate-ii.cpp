class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            // Check whatever ith index that i want is seen before
            if (mp.count(nums[i])) {

                // if i have seen that value before i will check this condition
                // abs(i - j) <= k
                if (i - mp[nums[i]] <= k) {
                    return true;
                }
            }

            // And if number is present in the map, update the position of the
            // number with new position
            mp[nums[i]] = i;
        }

        return false;
    }
};