class Solution {
public:

    char shift(char c , int x){
        return  c + x;
    }

    string replaceDigits(string s) {

        for(int i = 1 ; i < s.size(); i += 2){
            s[i] = s[i-1] + s[i]-48;
        }

       return s; 
    }
};