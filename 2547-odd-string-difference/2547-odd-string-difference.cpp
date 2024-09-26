class Solution {
public:
    string oddString(vector<string>& words) {
        map<char, int> mp;
        vector<vector<int>> vec;
        int j = 0;
        for (char i = 'a'; i <= 'z'; i++) {
            mp[i] = j;
            j++;
        }
        vector<int> temp;
        for (string n : words) {
            for (int i = 0; i < n.size() - 1; i++) {
                temp.push_back(mp[n[i]] - mp[n[i + 1]]);
            }
            vec.push_back(temp);
            temp.clear();
        }

        for (int i = 0; i < vec.size(); i++) {
            if (count(vec.begin(), vec.end(), vec[i]) == 1) {
                return words[i];
            }
        }

        return "";
    }
};