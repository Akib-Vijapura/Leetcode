class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string , int > mp;

        for(auto& num : arr1){
            string str = to_string(num);
            string prefix = "";

            for(auto c : str){
                prefix += c;
                mp[prefix]++;
            }
        }

        int ans = 0;

        for(auto num : arr2){
            string str = to_string(num);
            string prefix = "";

            for(auto c : str){
                prefix += c;

                if(mp.find(prefix) != mp.end()){
                    ans = max(ans , static_cast<int>(prefix.length()));
                }
            }
        }

        return ans;
    }
};