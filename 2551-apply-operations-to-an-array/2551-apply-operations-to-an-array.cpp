class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        //Task 1 : Perform array opration
        
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
        }

        //Task 2 : Move all zeros to end
        int i = 0;
        int j = 0;

        while(j < nums.size()){
            if(nums[j] == 0){
                j++;
            }else{
                swap(nums[i] , nums[j]);
                i++;
                j++;
            }
        }

        return nums;
    }
};