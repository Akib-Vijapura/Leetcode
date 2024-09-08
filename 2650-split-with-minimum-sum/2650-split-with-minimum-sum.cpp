class Solution {
public:
    int splitNum(int num) {
        vector<int> nums;

        while (num != 0) {
            int digit = num % 10;
            nums.push_back(digit);
            num = num / 10;
        }

        int num1 = 0;
        int num2 = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                num1 = (num1 * 10) + nums[i];
            } else {
                num2 = (num2 * 10) + nums[i];
            }
        }

        return num1 + num2;
    }
};