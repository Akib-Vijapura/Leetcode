class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.length()){
            return s;
        }

        int index = 0;
        int direction = 1;

        vector<vector<char>> rows(numRows);

        for(auto c : s){
            rows[index].push_back(c);

            if(index == 0){
                direction  = 1;
            }else if(index == numRows - 1){
                direction = -1;
            }

            index += direction;
        }

        string ans;

        for(auto row : rows){
            for(auto c : row){
                ans += c;
            }
        }

        return ans;
    }
};