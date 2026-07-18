// Last updated: 7/19/2026, 2:42:54 AM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size=arr.size();
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        unordered_set<int> seen;
        
        for(auto it:mp){
            if(seen.count(it.second)) return false;
            seen.insert(it.second);

        }
        return true;

        
    }
};