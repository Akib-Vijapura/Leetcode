class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26 , 0);

        for(auto c : s){
            count[c - 97]++;
        }

        for(auto c : t){
            if(count[c - 97] == 0){
                return false;
            }
            count[c - 97]--;
        }

        for(int i = 0 ; i < 26 ; i++){
            if(count[i] != 0){
                return false;
            }
        }

        return true;
    }
};