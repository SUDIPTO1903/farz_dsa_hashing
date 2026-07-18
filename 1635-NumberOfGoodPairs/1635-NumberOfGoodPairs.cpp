// Last updated: 7/19/2026, 2:42:52 AM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
      
        // Array to count occurrences of each number (constraints: 1 <= nums[i] <= 100)
        int count[101] = {0};
      
        // Iterate through each number in the array
        for (int& num : nums) {
            // Before incrementing, count[num] contains the number of times
            // we've seen this number before, which equals the number of new pairs
            // we can form with the current occurrence
            result += count[num];
          
            // Increment the count for this number
            count[num]++;
        }
      
        return result;
    }
};