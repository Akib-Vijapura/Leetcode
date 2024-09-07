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
        int cost1 = 0;
        int cost2 = 0;

        cost1 = solve(position , 0);
        cost2 = solve(position , 1);

        return min(cost1 , cost2);
    }
};