class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26);
        int left = 0;
        int ans = 0;
        int maxElement = 0;

        for(int right  = 0 ; right < s.size() ; right++){
            maxElement = max(maxElement , ++freq[s[right] - 'A']);

            if((right - left + 1) - maxElement > k){
                freq[s[left] - 'A']--;
                left++;
            }

            ans = max(ans , right-left+1);
        }

        return ans;
    }
};