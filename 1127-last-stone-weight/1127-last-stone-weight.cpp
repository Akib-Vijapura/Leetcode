class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;

        for (auto stone : stones) {
            q.push(stone);
        }

        int ans = 0;

        while (q.size() > 1) {
            int first = q.top();
            q.pop();

            int second = q.top();
            q.pop();

            q.push(abs(first - second));
        }

        return q.top();
    }
};