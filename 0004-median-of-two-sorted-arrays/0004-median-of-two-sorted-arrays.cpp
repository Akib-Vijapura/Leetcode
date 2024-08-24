class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto num : nums1){
            ans.push_back(num);
        }

        for(auto num : nums2){
            ans.push_back(num);
        }

        sort(ans.begin() , ans.end());

        double total  = 0;
        int n = ans.size();

        int mid = n/2;

        if(n % 2 == 0){
            total = (ans[mid] + ans[mid-1])/2.0;
        }else{
            total = ans[mid];
        }



        return total;
    }
};