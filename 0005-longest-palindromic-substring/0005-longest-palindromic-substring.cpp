class Solution {
    int dp[1001][1001];

     private:

        bool solve(int i , int j , string& s){

            if(i >= j){
                return true;
            }

            if(dp[i][j] != -1){
                return dp[i][j];
            }

            if(s[i] == s[j]){
              return dp[i][j]  = solve(i+1 , j-1 , s);
            }

            return dp[i][i] = false;
        }

public:
    string longestPalindrome(string s) {
        int maxLength = INT_MIN;
        int start = 0;
        int n = s.size();
        memset(dp , -1 , sizeof(dp));

        for(int i  = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if(solve(i , j , s) == true){
                    if(j - i + 1 > maxLength){
                        maxLength = j - i + 1;
                        start = i;
                    }
                }
            }
        }

        cout<<start<<maxLength<<endl;
        return s.substr(start , maxLength);
    }
};