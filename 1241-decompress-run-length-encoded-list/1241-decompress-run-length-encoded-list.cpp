class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int i = 0 ;

        while(i < n){
            int freq = i;
            int val = i+1;

            while(nums[freq]--){
                ans.push_back(nums[val]);
            }

            i = val + 1;
        }

        return ans;
    }
};