class Solution {
public:
    int passThePillow(int n, int time) {
        
        int chunk = time / (n-1);

        if(chunk % 2 == 0){
            //even
            return time % (n-1) + 1;
        }else{
            //odd
            return n - time % (n-1);
        }
        
    }
};