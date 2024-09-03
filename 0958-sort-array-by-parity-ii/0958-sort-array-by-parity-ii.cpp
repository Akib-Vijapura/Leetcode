class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(auto num : nums){
            if(num % 2 == 0){
                even.push_back(num);
            }else{
                odd.push_back(num);
            }
        }
        
        int evenI = 0;
        int oddI = 0;


        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 2 == 0){
                if(evenI < even.size()){
                    nums[i] = even[evenI];
                    evenI++;
                }
            }else{
                if(oddI < odd.size()){
                    nums[i] = odd[oddI];
                    oddI++;
                }
            }
        }
        
        return nums;
    }
};