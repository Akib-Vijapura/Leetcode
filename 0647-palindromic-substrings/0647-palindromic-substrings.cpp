class Solution {
private:
   bool solve(int i , int j , string& s){
        if(i >= j){
            return true;
        }

        if(s[i] == s[j]){
            return solve(i+1 , j-1 , s);
        }

        return false;
   }
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();

        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                if(solve(i , j , s)){
                    count++;
                }
            }
        }


        return count;
    }
};