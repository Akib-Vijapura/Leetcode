class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count1 = 0;
        int count0 = 0;

        for (auto student : students) {
            if (student) {
                count1++;
            } else {
                count0++;
            }
        }

        for (auto sandwiche : sandwiches) {
            if (sandwiche) {
                if (count1 > 0) {
                    count1--;
                } else {
                    return count0;
                }
            } else {
                if (count0 > 0) {
                    count0--;
                } else {
                    return count1;
                }
            }
        }

        return 0;
    }
};