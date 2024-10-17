class Solution {
public:
    int maximumSwap(int num) {
        string nums = to_string(num);

        int maxIndex = -1;
        int p1 = -1;
        int p2 = -1;
        int n = nums.size();

        for(int i = n-1; i >= 0 ; i--){
            if(maxIndex == -1 || nums[i] > nums[maxIndex]){
                maxIndex = i;
            }else if(nums[i] < nums[maxIndex]){
                p1 = i;
                p2 = maxIndex;
            }
        }

        if(p1 != -1 && p2 != -1){
            swap(nums[p1] , nums[p2]);
        }

        return stoi(nums);
    }
};