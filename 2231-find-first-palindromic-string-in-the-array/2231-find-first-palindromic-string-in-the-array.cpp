class Solution {
public:
    bool solve(int l , int h , string& s){
        while(l <= h){
            if(s[l] != s[h]){
                return false;
            }

            l++;
            h--;
        }

        return true;
    }

    string firstPalindrome(vector<string>& words) {
        string ans = "";
        for(int i = 0 ; i < words.size() ; i++){
            string s = words[i];
            int n = s.size();
            int l = 0;
            int h = n-1;

            if(solve(l , h , s)){
                ans = s;
                break;
            }
        }

        return ans;
    }
};