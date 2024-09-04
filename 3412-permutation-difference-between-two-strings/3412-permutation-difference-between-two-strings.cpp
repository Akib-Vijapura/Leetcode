class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> freq(26 , 0);

        for(int i = 0 ; i < s.size() ; i++){
            freq[s[i] - 'a'] = i;
        }

        for(int i = 0 ; i < t.size() ; i++){
            freq[t[i] - 'a'] = abs(freq[t[i] - 'a'] - i);
        }

        return accumulate(freq.begin() , freq.end() , 0);
    }
};