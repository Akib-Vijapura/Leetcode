class Solution {
public:

    bool solve(int low , int high , string& s){
        while(low <= high){
            if(s[low] != s[high]){
                return false;
            }

            low++;
            high--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            if(s[low] == s[high]){
                low++;
                high--;
            }else{
                return (solve(low+1 , high , s) || solve(low , high-1 , s));
            }
        }

        return true;
    }
};