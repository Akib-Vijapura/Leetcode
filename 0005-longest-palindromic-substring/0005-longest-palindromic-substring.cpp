class Solution {
private:
    int dp[1001][1001];
    bool solve(int i, int j, string& s) {

        if (i >= j) {
            return true;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if (s[i] == s[j]) {
            return dp[i][j] = solve(i + 1, j - 1, s);
        }

        return dp[i][j] =  false;
    }

public:
    string longestPalindrome(string s) {
        int maxLength = INT_MIN;
        int n = s.size();
        int start = 0;
        memset(dp , -1 , sizeof(dp));

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (solve(i, j, s)) {
                    if(j-i+1 > maxLength){
                        maxLength = j-i+1;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxLength);
    }
};