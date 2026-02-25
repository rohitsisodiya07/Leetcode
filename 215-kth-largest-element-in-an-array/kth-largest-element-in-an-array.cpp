class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int largest = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {

            if (k) {

                largest = nums[i];
                k--;
            }
            if (k == 0) {
                return largest;
            }
        }
        return largest;
    }
};