class Solution {
public:

    bool foo(string s){
        for(auto c : s){
            if(c == '0'){
                return false;
            }
        }

        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        int i = 1;
        int j = n-1;

        while(i <= j){
            if(i + j == n){
                string s1 = to_string(i);
                string s2 = to_string(j);

                if(foo(s1) and foo(s2)){
                    return {i , j};
                }
            }

            i++;
            j--;
        }

        return {};
    }
};