class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int> m;

        for(auto it : t){
            m[it]++;
        }

        int start = 0 , end = 0;
        int total = t.size() , n = s.size();
        int ans = INT_MAX , index = -1;

        while(end < n){

            m[s[end]]--;

            if(m[s[end]] >= 0 ){
                total--;
            }

            while(!total && start <= end){
                
                if(ans > end - start + 1){
                    ans = end - start + 1;
                    index = start;
                }

                m[s[start]]++;

                if(m[s[start]] > 0){
                    total++;
                }
                
                start++;
            }
            
            end++;
        }

        if(index == -1){
            return "";
        }

        string str = "";

        for(int i = index ; i < index + ans ; i++){
            str+=s[i];
        }

        return str;
    }
};