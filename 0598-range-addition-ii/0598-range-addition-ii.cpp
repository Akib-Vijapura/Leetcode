class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        /* vector<vector<int>> matrix(m, vector<int>(n));

        int size = ops.size();

        for (int i = 0; i < size; i++) {
            vector<int> v = ops[i];
            int a = v[0];
            int b = v[1];

            for (int j = 0; j < a; j++) {
                for (int k = 0; k < b; k++) {
                    matrix[j][k]++;
                }
            }
        }

        int maxElement = INT_MIN;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] > maxElement) {
                    maxElement = matrix[i][j];
                }
            }
        }

        int count = 0;

         for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == maxElement) {
                    count++;
                }
            }
        }

        return count; */

        int col = n;
        int row = m;

        int k = ops.size();

        for (int i = 0; i < k; i++) {
            vector<int> temp = ops[i];
            int a = temp[0];
            int b = temp[1];

            row = min(row, a);
            col = min(col, b);
        }

        return row * col;
    }
};