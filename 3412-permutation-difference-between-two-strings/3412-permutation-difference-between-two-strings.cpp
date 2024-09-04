class Solution {
    
public:

    int find(string s , char c){
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == c){
                return i;
            }
        }

        return -1;
    }

    int findPermutationDifference(string s, string t) {
        int ans = 0;
        
        for(int i = 0 ; i < s.size() ; i++){
            ans += abs(i - find(t , s[i]));
        }

        return ans;
    }
};