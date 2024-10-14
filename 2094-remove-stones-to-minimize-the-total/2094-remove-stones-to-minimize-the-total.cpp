class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        priority_queue<int,vector<int>> pq(piles.begin() , piles.end());
        int ans = 0;

        while(k){
            int top = pq.top();
            pq.pop();

            pq.push(ceil(top/2.0));
            k--;
        }

        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};