class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> set (nums.begin() , nums.end());
        int maxi = -1;

        for(auto num : nums){
            if(set.find(-num) != set.end()){
                maxi = maxi = max(maxi , abs(num));
            }
        }

        return maxi != -1 ? maxi : -1;
    }
};