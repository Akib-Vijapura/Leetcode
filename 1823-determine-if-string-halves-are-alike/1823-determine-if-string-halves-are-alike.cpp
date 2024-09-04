class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int half = n / 2;

        string a = "";
        string b = "";

        for (int i = 0; i < half; i++) {
            a += s[i];
        }

        for (int i = half; i < n; i++) {
            b += s[i];
        }

        int count1 = 0;
        int count2 = 0;

        for (auto c : a) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count1++;
            }
        }

        for (auto c : b) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count2++;
            }
        }

        if (count1 == count2) {
            return true;
        }

        return false;
    }
};