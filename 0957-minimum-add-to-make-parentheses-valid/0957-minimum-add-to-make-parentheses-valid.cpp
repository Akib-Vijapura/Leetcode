class Solution {
public:
    int minAddToMakeValid(string s) {
        int closing = 0;
        int opening = 0;

        for(auto c : s){
            if(c == '('){
                opening++;
            }else if(c == ')' && opening > 0){
                opening--;
            }else{
                closing++;
            }
        }

        return opening + closing;
    }
};