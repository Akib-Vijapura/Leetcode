class Solution {
public:
    
    void solve(int curr , int n , vector<int>& ans){
        if(curr > n){
            return;
        }

        ans.push_back(curr);

        for(int append = 0 ; append <= 9 ; append++){
            int newNumber = curr * 10 + append;

            if(newNumber > n){
                return;
            }

            solve(newNumber , n , ans);
        }
    }


    vector<int> lexicalOrder(int n) {
        vector<int> ans;

        for(int startNumber = 1; startNumber <=9 ; startNumber++){
            solve(startNumber , n , ans);
        }

        return ans;
    }
};