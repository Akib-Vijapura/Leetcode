class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> mp;

        for(auto num : arr){
            mp[num]++;
        }

        unordered_set<int>set;

        for(auto it : mp){
            if(set.find(it.second) != set.end()){
                return false;
            } 

            set.insert(it.second);
        }

        return true;
    }
};