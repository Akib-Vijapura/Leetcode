class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        if(n == 1){
            return cost[0];
        }

        if(n == 2){
            return min(cost[0] , cost[1]);
        }

        int first = cost[0];
        int second = cost[1];

        for(int i = 2 ; i < n ; i++){
            int curr = min(first , second) + cost[i];
            first = second;
            second = curr;
        }

        return min(first , second);
    }
};