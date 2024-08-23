class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        string ans = ""; //store ans strig
        string temp = ""; //store specific word

        int i = 0;

        while(i < n){
            temp = ""; // when found one word then reset temp

            //store word to temp
            while(s[i] != ' ' && i < n){
                temp += s[i];
                i++;
            }

            while(s[i] == ' ' && i < n){
                i++;
            }
            
            //store temp string ans
            if(!temp.empty()){
                if(ans.empty()){
                    ans += temp;
                }else{
                    ans = temp + ' ' + ans;
                }
            }
        }

        return ans;
    }
};