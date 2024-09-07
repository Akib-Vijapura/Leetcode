class Solution {
public:

    int solve(vector<int>& arr , int cost){
        int count = 0;

        for(auto num : arr){
            if(num % 2 == cost){
                count++;
            }
        }

        return count;
    }

    int minCostToMoveChips(vector<int>& position) {
        int count1 = 0;
        int count2 = 0;

        count1 = solve(position , 0);
        count2 = solve(position , 1);

        return min(count1 , count2);
    }
};