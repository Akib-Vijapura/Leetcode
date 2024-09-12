class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
         int res = 0;
         int n = nums.size();

         unordered_map<int,int> count;
         count[nums[n-1] - nums[n-2]] = 1;

         for(int b = n - 3 ; b >= 1 ; b--){
            for(int a = b - 1 ; a >= 0 ; a--){
                res += count[nums[a] + nums[b]];
            }

            for(int x = n - 1 ; x > b ; x--){
                count[nums[x] - nums[b]]++;
            }
         }

        return res;
    }
};