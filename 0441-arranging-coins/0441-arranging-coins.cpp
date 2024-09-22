class Solution {
public:
    int arrangeCoins(int n) {
        /*int i = 1;
        int count = 0;

        while(true){
            n = n - i;

            if(n < 0){
                break;
            }else{
                count++;
            }

            i++;
        }

        return count;*/

        long long int low = 0;
        long long int high = n;

        while (low <= high) {   
            long long int mid = low + (high - low) / 2;

            if ((mid * (mid + 1)) / 2 == n)
                return mid;
            else if ((mid * (mid + 1)) / 2 > n)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return high;
    }
};