class Solution {
public:
    bool isCircularSentence(string s) {
        bool ans = true;

        if (s[0] != s[s.size() - 1]) {
            ans = false;
        }

        for (int i = 1; i < s.size() - 1; i++) {
            if (s[i] == ' ' && s[i - 1] != s[i + 1]) {
                ans = false;
            }
        }

        return ans;
    }
};