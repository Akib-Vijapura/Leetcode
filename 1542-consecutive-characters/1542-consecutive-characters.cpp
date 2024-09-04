class Solution {
public:
    int maxPower(string s) {
        int maxConsecutive = 0;
        int consecutive = 1;  // Initialize to 1 for the first character

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                consecutive++;
            } else {
                maxConsecutive = max(maxConsecutive, consecutive);
                consecutive = 1;  // Reset only if the characters are different
            }
        }

        return max(maxConsecutive, consecutive);
    }
};