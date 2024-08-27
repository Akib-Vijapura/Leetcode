class Solution {
public:

    void Heapify(vector<int>& nums , int index , int n){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left < n && nums[left] > nums[largest]){
            largest = left;
        }

        if(right < n && nums[right] > nums[largest]){
            largest = right;
        }

        if(largest != index){
            swap(nums[index] , nums[largest]);
            Heapify(nums , largest , n);
        }

    }

    void sortArr(vector<int>& nums) {
        int n = nums.size();

        // Build max-heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            Heapify(nums, i, n);
        }

        for (int i = n - 1; i > 0; i--) {
            swap(nums[i], nums[0]);
            Heapify(nums, 0, i);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        sortArr(nums);

        return nums;
    }
};