class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.size() != t.size()){
            return false;
        }
        
        unordered_map<int,int> mp;
        for(int i = 0 ; i < s.size() ; i++){
            int diff = (t[i] - s[i] + 26) % 26;
            cout<<diff<<endl;

            if(diff != 0){
                int mul = mp[diff];
                long long value = diff + 26 * mul;
                if(value <= k){
                    mp[diff]++;
                }else{
                    return false;
                }
            }
        }

        return true;
    }
};