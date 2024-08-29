class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        if(numRows == 0) return ans;  // Handle edge case where numRows is 0

        ans.push_back({1});  // Start with the first row [1]

        for(int row = 1; row < numRows; row++){
            vector<int> r;
            vector<int> prevRow = ans[row-1];

            r.push_back(1);  // First element is always 1

            for(int j = 1; j < row; j++){
                r.push_back(prevRow[j-1] + prevRow[j]);  // Sum of the two elements above
            }

            r.push_back(1);  // Last element is always 1

            ans.push_back(r);  // Add the row to the result
        }

        return ans;
    }
};
