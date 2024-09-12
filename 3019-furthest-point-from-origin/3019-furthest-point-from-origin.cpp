class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int leftCount = 0 ;
        int rightCount = 0;
        int gap = 0;

        for(int i = 0 ; i < moves.size() ; i++){
            if(moves[i] == 'R'){
                rightCount++;
            }else if(moves[i] == 'L'){
                leftCount++;
            }else{
                gap++;
            }
        }
        if(leftCount >= rightCount){
            return leftCount + gap - rightCount;           
        }

        return rightCount + gap - leftCount;
    }
};