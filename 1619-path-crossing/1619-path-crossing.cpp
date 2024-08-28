class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0;
        int y = 0;

        set<vector<int>> coordinates;
        coordinates.insert({0,0});

        for(auto c : path){

            if(c == 'N'){
                y++;
            }else if(c == 'E'){
                x++;
            }else if(c == 'S'){
                y--;
            }else{
                x--;
            }

            if(coordinates.find({x,y}) != coordinates.end()){
                return true;
            }

            coordinates.insert({x,y});
        }

        return false;
    }
};