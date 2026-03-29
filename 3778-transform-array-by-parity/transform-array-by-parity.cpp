class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for (auto& ch : nums) {

            if (ch % 2 == 0)
                ch = 0;
            else
                ch = 1;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};