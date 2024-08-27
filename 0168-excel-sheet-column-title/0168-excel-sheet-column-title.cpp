class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";

        while(columnNumber > 0){
            columnNumber--;
            int a = columnNumber%26;
            s += char('A' + a);
            columnNumber = columnNumber/26;
        }

        reverse(s.begin() , s.end());

        return s;
    }
};