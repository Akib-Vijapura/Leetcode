class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stack;

        for(int i = 0 ; i < s.size() ; i++){

             if(!stack.empty() && s[i] == stack.top()){
                stack.pop();
                continue;
            }  

            stack.push(s[i]);

            
        }
        
        string ans = "";
        while(!stack.empty()){
            ans += stack.top();
            stack.pop();
        }

        reverse(ans.begin() , ans.end());

        return ans;
    }
};