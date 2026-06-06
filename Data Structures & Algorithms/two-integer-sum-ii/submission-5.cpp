class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            int currentSum = numbers[l] + numbers[r];

            if (currentSum == target) {
                // Return 1-indexed indices
                return {l + 1, r + 1};
            } 
            else if (currentSum < target) {
                // We need a larger sum, move the left pointer right
                l++;
            } 
            else {
                // We need a smaller sum, move the right pointer left
                r--;
            }
        }
        return {-1, -1}; // No solution found
    }
};