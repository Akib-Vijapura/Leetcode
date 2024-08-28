class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<pair<int, pair<int, int>>> temp;
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            temp.push_back(make_pair(matrix[i][0], make_pair(i, 0)));
        }

        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            minHeap(temp.begin(), temp.end());

        int ans;
        pair<int, pair<int, int>> Element;
        int i = 0;
        int j = 0;

        while (k--) {
            Element = minHeap.top();
            minHeap.pop();
            ans = Element.first;
            i = Element.second.first;
            j = Element.second.second;

            if (j + 1 < n) {
                minHeap.push(make_pair(matrix[i][j + 1], make_pair(i, j + 1)));
            }
        }

        return ans;
    }
};

