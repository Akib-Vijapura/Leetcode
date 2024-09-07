class Solution {
public:

    void filterEmail(string& s , string& email){
        
        bool isLocalName = true;

        for(int i = 0 ; i < email.size() ; i++){
            if(email[i] == '+' && isLocalName){
                while(email[i] != '@'){
                    i++;
                }

                isLocalName = false;
            }else if(email[i] == '.' && isLocalName){
                continue;
            }else if(email[i] == '@'){
                isLocalName = false;
            }

            s += email[i];
        }
    }

    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> set;

        for(auto email : emails){
            string s = "";

            filterEmail(s , email);

            if(set.find(s) == set.end()){
                set.insert(s);
            }
        }

        return set.size();
    }
};