class Solution {
public:

    int fibno(int n, vector<int> &dp){

        if(n <= 1){
            return n;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = fibno(n-1 , dp) + fibno(n-2 , dp);
    }

    int fib(int n) {

        vector<int> dp(n+1 , -1);

        return fibno(n , dp);
    }
};