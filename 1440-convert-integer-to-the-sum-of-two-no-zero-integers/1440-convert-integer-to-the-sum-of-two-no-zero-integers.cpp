class Solution {
public:

    bool foo(int n){
        while( n != 0){
            int digit = n % 10;

            if(digit == 0){
                return false;
            }

            n = n / 10;
        }

        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        int i = 1;
        int j = n-1;

        while(i <= j){
            if(i + j == n){ 
                if(foo(i) and foo(j)){
                    return {i , j};
                }
            }

            i++;
            j--;
        }

        return {};
    }
};