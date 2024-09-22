class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
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

        return count;
    }
};