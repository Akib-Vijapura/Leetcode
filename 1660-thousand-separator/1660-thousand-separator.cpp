class Solution {
public:
    string thousandSeparator(int n) {
         string s = to_string(n);
         int j = 0;

         if(s.size() > 3){
            string str = "";

            for(int i = s.size()-1 ; i >= 0 ; i--){
                j++;

                if((j != 1) && (j%3 == 1)){
                    str = str + '.';
                }

                str = str + s[i];
            }

            reverse(str.begin() , str.end());
            return str;
         }

         return s;
    }
};