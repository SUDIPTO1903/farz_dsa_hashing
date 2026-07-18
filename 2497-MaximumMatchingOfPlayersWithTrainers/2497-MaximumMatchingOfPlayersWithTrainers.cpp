// Last updated: 7/19/2026, 2:42:53 AM
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        // Sort both arrays to enable greedy matching
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
      
        int playerCount = players.size();
        int trainerCount = trainers.size();
        int matchedPlayers = 0;
        int trainerIndex = 0;
      
        // Try to match each player with a trainer
        for (int playerIndex = 0; playerIndex < playerCount; ++playerIndex) {
            // Find the first trainer that can train the current player
            // A trainer can train a player if trainer's ability >= player's ability
            while (trainerIndex < trainerCount && trainers[trainerIndex] < players[playerIndex]) {
                ++trainerIndex;
            }
          
            // If no more trainers available, return the number of matched players
            if (trainerIndex == trainerCount) {
                return matchedPlayers;
            }
          
            // Match current player with current trainer
            matchedPlayers++;
            trainerIndex++;  // Move to next trainer for next player
        }
      
        // All players have been matched
        return matchedPlayers;
    }
};