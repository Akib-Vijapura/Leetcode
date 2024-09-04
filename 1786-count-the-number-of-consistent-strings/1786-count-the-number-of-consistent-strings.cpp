class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hashTable[26] = {0};
        int count = 0;

        for(int i = 0 ; i < allowed.size() ; i++){
            hashTable[allowed[i] - 'a']++;
        }

        for(int i = 0 ; i < words.size() ; i++){
            string temp = words[i];
            bool flag = true;

            for(int j = 0 ; j < temp.size() ; j++){
                if(hashTable[temp[j] - 'a'] == 0){
                    flag = false;
                    break;
                }
            }

            if(flag){
                count++;
            }
        }

        return count;
    }
};