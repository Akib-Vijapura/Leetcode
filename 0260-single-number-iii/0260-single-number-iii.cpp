class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        /*vector<int> ans;
        unordered_map<int , int> mp;

        for(auto num : nums){
            mp[num]++;
        }

        for(auto it : mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }

        return ans;*/

        int xr = 0;

        for(auto& num : nums){
            xr ^= num;
        }

        // find first set bit from LSB
        int bitNum = 0;
        while(1){
            
            if(xr & (1 << bitNum)){
                break;
            }

            bitNum++;
        }

        // divide into even and odd group
        int even = 0;
        int odd = 0;

        for(auto& x : nums){
            
            if(x & (1 << bitNum)){
                odd ^= x;
            }else{
                even ^= x;
            }
        }

        return {even , odd};
    }
};