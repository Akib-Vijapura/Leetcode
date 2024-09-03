class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ptr = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0){
                swap(nums[i] , nums[ptr]);
                ptr++;
            }
        }

        return nums;
    }
};