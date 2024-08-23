class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for (auto it : tokens) {
            // if operator
            if (it == "+" || it == "-" || it == "*" || it == "/") {

                int a = stoi(st.top());
                st.pop();

                int b = stoi(st.top());
                st.pop();

                int c;
                if (it == "+") {
                    c = b + a;
                } else if (it == "-") {
                    c = b - a;
                } else if (it == "*") {
                    c = b * a;
                } else {
                    c = b / a;
                }

                st.push(to_string(c));

            } else // if operand
            {
                st.push(it);
            }
        }

        return stoi(st.top());
        
    }
};