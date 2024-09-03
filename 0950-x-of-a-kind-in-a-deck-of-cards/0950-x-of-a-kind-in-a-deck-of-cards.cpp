class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;

        for(auto card : deck){
            mp[card]++;
        }

        int gcdValue = 0;
        for(auto& entry : mp){
            gcdValue = gcd(gcdValue , entry.second);

            if(gcdValue == 1){
                return false;
            }
        }

        return gcdValue >= 2;
    }

    private : 
    int gcd(int a , int b){
        return b == 0 ? a : gcd(b , a % b);
    }
};