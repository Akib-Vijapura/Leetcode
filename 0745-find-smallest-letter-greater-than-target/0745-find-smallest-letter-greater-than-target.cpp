class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];

        for (auto letter : letters) {
            if (letter > target) {
                ans = letter;
                break;
            }
        }

        return ans;
    }
};