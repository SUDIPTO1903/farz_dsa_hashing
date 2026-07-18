// Last updated: 7/19/2026, 2:42:49 AM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int size=s.size();
        vector<int> freq(26,0);
        for(auto ch:s){
            freq[ch-'a']++;

        }
        int check=0;
        for(auto it:freq){
            if(it==0){
                continue;
            }
            if(check==0)check=it;
            else if(check!=it)return false;



        }
        return true;
        
    }
};