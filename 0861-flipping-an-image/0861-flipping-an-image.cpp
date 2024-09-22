class Solution {
public:
    void transform(vector<int>& v) {
        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 1) {
                v[i] = 0;
            } else {
                v[i] = 1;
            }
        }
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int n = image.size();

        for (int i = 0; i < n; i++) {
            transform(image[i]);
        }

        return image;
    }
};