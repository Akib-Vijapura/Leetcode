class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long sum = accumulate(shifts.begin(), shifts.end(), 0LL);

        int n = s.size();
        int shift;
        for(int i=0;i<n;i++)
        {
            shift = sum%26;
            s[i] = (s[i]-'a'+shift)%26+'a';
            sum -= shifts[i];
        }
        
        return s;
    }
};