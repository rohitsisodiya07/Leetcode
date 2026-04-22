class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;

        // Step 1: total sum
        for (int num : nums) {
            total += num;
        }

        int leftSum = 0;

        // Step 2: check each index
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i; // leftmost index
            }

            leftSum += nums[i];
        }

        return -1;
    }
};