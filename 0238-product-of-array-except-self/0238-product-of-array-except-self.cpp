class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size() , 0);
        int product = 1;
        int zeros = 0;

        for(auto& num : nums){
            if(num == 0){
                zeros++;
            }else{
                product *= num;
            }
        }

        if(zeros > 1){
            return ans;
        }
        
        if(zeros == 1){
            for(int i = 0 ; i < nums.size() ; i++){
                if(nums[i] == 0){
                    ans[i] = product;
                }else{
                    ans[i] = 0;
                }
            }
        }else{
            for(int i = 0 ; i < nums.size() ; i++){
                ans[i] = product/nums[i];
            }
        }

        return ans;
    }
};
