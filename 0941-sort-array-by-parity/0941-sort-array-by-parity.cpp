class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        vector<int> odd;

        for(auto num : nums){
            if(num % 2 == 0){
                ans.push_back(num);
            }
        }

        for(auto num : nums){
            if(num % 2 != 0){
                odd.push_back(num);
            }
        }

        for(auto num : odd){
            ans.push_back(num);
        }


        return ans;
        
    }
};