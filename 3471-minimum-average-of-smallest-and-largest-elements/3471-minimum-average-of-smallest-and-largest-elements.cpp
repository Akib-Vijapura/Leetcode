class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        int n = nums.size();

        sort(nums.begin() , nums.end());

        int i = 0;
        int j = n-1;

        while(i < n/2){
            double avg = (nums[i] + nums[j]) / 2.0;
            averages.push_back(avg);

            i++;
            j--;
        }
    
        sort(averages.begin() , averages.end());

        return averages[0];
    }
};