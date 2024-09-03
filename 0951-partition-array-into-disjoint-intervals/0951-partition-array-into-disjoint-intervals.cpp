class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int minNum = nums[0];
        int maxNum = nums[0];

        int left = 0;

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] < minNum){
                left = i;
                minNum = maxNum;
            }

            maxNum = max(maxNum , nums[i]);
        }

        return left+1;

    }
};