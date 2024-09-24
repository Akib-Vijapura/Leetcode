class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        if (n == 0) {
            return ans;
        }

        int start = nums[0];
        int end = nums[0];
        int count = nums[0];

        for (int i = 1; i < n; i++) {

            if (count + 1 == nums[i]) {
                end++;
                count++;
            } else {
                string str = "";

                if (start != end) {
                    str += to_string(start) + "->" + to_string(end);
                    ans.push_back(str);
                } else {
                    ans.push_back(to_string(start));
                }

                start = nums[i];
                end = nums[i];
                count = nums[i];
            }
        }

        // Insert last value
        string str = "";

        if (start != end) {
            str += to_string(start) + "->" + to_string(end);
            ans.push_back(str);
        } else {
            ans.push_back(to_string(start));
        }

        return ans;
    }
};