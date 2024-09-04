class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();

        int ASCIIs = 0;
        int ASCIIt = 0;

        for(int i = 0 ; i < n ; i++){
            ASCIIs += s[i] - 'a';
            ASCIIt += t[i] - 'a';
        }

        ASCIIt += t[m-1] - 'a';

        return ASCIIt - ASCIIs + 'a';
    }
};