class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        
        // Count how many times 5 is a factor in numbers from 1 to n
        while (n > 0) {
            n /= 5;
            count += n;
        }
        
        return count;
    }
};