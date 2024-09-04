class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxFort = 0 , curr = 0 , prev;
        int n = forts.size();
        bool flag = false;

        for(int i = 1 ; i < n ; i++){

            if(forts[i] == 0 && forts[i-1] != 0){
                flag = true;
                prev = forts[i-1];
            }

            if(forts[i] != 0){
                if(forts[i] != prev && flag){
                    maxFort = max(maxFort , curr);
                }
                flag = false;
                curr = 0;
                
            }

            if(flag){
                curr++;
            }
        }


        return maxFort;
    }
};