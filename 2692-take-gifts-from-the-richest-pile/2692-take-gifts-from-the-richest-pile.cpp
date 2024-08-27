class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long int> q;

        for(auto gift : gifts){
            q.push(gift);
        }

        while(k){
            int gift = q.top();
            q.pop();

            q.push(sqrt(gift));
            k--;
        }

        long long int ans = 0;

        while(!q.empty()){
            ans += q.top();
            q.pop();
        }

        return ans;
    }
};