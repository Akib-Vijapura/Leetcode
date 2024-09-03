class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        int n = nums.size();

        while(even < n && odd < n){

            if(even < n && nums[even] % 2 == 0){
                even += 2;
            }

            if(odd < n && nums[odd] % 2 != 0){
                odd += 2;
            }

            if(even < n && odd < n){
                swap(nums[even] , nums[odd]);
            }
        }

        return nums;
    }
};