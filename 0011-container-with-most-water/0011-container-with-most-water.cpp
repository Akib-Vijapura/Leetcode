class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int right = height.size() - 1;

        for(int i = 0 ; i < height.size() ; i++){
            maxWater = max(maxWater , (right - left) * min(height[left] , height[right]));

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxWater;
    }
};