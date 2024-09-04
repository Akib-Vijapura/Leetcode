class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxAns = 0;
        int temp = 0;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i+1]){
                temp++;
            }else{
                maxAns = max(maxAns , temp);
                temp = 0;
            }
        }

        maxAns = max(maxAns , temp);

        return maxAns+1; 
    }
};