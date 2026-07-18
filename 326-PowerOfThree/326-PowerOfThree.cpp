// Last updated: 7/19/2026, 2:43:00 AM
class Solution {
public:
    bool isPowerOfThree(int n) {
        // Base case: if n is less than or equal to 0, it's not a power of three
        if (n <= 0) return false;

        // Base case: if n is 1, it's a power of three (3^0 = 1)
        if (n == 1) return true;

        // Recursive case: if n is divisible by 3, continue the recursion
        if (n % 3 == 0) {
            return isPowerOfThree(n / 3);
        }

        // If n is not divisible by 3, it's not a power of three
        return false;
    }
};
