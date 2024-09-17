class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;

        for(int i = 0 ; i < s1.size() ; i++){
            string temp = "";

            while(s1[i] != ' ' && i < s1.size()){
                temp += s1[i];
                i++;
            }

            mp[temp]++;
        }

        for(int i = 0 ; i < s2.size() ; i++){
            string temp = "";

            while(s2[i] != ' ' && i < s2.size()){
                temp += s2[i];
                i++;
            }

            mp[temp]++;
        }
        
        vector<string> ans;

        for(auto it : mp){
             if(it.second == 1){
                ans.push_back(it.first);
             }
        }

        return ans;
    }
};