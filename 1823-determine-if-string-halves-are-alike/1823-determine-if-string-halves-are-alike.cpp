class Solution {
public:
    bool isval(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int half = n / 2;

        int i = 0;
        int j = half;

        int counter1 = 0;
        int counter2 = 0;

        while (i < half && j < n) {

            if (isval(s[i])) {
                counter1++;
            }

            if (isval(s[j])) {
                counter2++;
            }

            i++;
            j++;
        }

        return counter1 == counter2;
    }
};