class Solution {
public:
    int countEven(int num) {
        
         int count = 0;

         for(int i = 2 ; i <= num ; i++){
            int sum = 0;

            int k = i;

            while(k > 0){
                int x = k % 10;
                sum += x;
                k = k/10;
            }

            if(sum % 2 == 0){
                count++;
            }
         }

         return count;
    }
};