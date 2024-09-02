class Solution {
public:
    int passThePillow(int n, int time) {

        int sum = 1;
        int direction = 1;

        while (time--) {

            if (sum == n) {
                direction = -1;
            }

            if (sum == 1 && direction == -1) {
                direction = 1;
            }

            if (direction == -1) {
                sum -= 1;
            } else {
                sum += 1;
            }
        }

        return sum;
    }
};