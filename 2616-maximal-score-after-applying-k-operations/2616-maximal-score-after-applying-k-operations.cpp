class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> pq(nums.begin() , nums.end());

        long long score = 0;
        while(k--){
            int topNum = pq.top();
            pq.pop();

            score += topNum;
            pq.push(ceil(topNum/3.0));
        }

        return score;
    }
};