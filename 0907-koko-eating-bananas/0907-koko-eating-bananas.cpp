class Solution {
public:

    bool canEatBanana(vector<int>& piles , int k , int h){
        int actualHours = 0;

        for(auto& pile : piles){
            actualHours += pile/k;

            if(pile % k != 0){
                actualHours++;
            }
        }

        return actualHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int low = 1;
        int high = *max_element(begin(piles) ,  end(piles));

        while(low < high){
            int mid = low + (high - low) / 2;

            if(canEatBanana(piles , mid , h)){
                high = mid;
            } else{
                low = mid + 1;
            }
        }

        return low;
    }
};