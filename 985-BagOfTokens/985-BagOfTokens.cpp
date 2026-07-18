// Last updated: 7/19/2026, 2:42:56 AM
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int maxScore = 0;      
        int currentScore = 0; 
        int left = 0;
        int right = tokens.size() - 1;
    
        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left];
                left++;
                currentScore++;
                maxScore = max(maxScore, currentScore);
            }
            else if (currentScore > 0) {
                power += tokens[right];
                right--;
                currentScore--;
            }
            
            else {
                break;
            }
        }
      
        return maxScore;
    }
};
