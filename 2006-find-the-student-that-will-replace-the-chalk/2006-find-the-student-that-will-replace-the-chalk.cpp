class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        long long totalChalk = 0;

        for (auto it : chalk) {
            totalChalk += it;
        }

        

        int remaining = k % totalChalk;

        for (int i = 0; i < chalk.size(); i++) {

            if (remaining < chalk[i]) {
                return i;
            }

            remaining -= chalk[i];
        }

        return 0;
    }
};