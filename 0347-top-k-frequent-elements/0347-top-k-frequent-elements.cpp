class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (auto& num : nums) {
            mp[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            min_heap;

        for (auto& it : mp) {
            min_heap.push({it.second, it.first});

            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        while (!min_heap.empty()) {
            ans.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return ans;
    }
};