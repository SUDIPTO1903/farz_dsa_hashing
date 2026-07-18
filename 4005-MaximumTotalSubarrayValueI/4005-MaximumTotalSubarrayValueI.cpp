// Last updated: 7/19/2026, 2:42:50 AM
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max1=INT_MIN;
        int min1=INT_MAX;
        for(auto it: nums){
            max1=max(max1,it);
            min1=min(min1,it);
        }
        long long ans;
        ans=1LL*(max1-min1)*k;
        return ans;
        
        
        }


        
    
};