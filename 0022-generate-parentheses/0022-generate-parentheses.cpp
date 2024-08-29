class Solution {
public:
    void generateAns(int n, int open, int close, vector<string>& ans,
                     string temp) {

        if (open == n && close == n) {
            ans.push_back(temp);
            return;
        }

        // left side
        if (open < n) {
            temp.push_back('(');
            generateAns(n, open + 1, close, ans, temp);
            temp.pop_back();
        }

        // right side
        if (close < open) {
            temp.push_back(')');
            generateAns(n, open, close + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";

        generateAns(n, 0, 0, ans, temp);

        return ans;
    }
};