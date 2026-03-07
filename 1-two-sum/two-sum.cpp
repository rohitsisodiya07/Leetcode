class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> store;
        unordered_map<int, int> m;
        if (nums.size() == 2) {
            store.push_back(0);
            store.push_back(1);
            return store;
        }

        for (int i = 0; i < nums.size(); i++) {

            int first = nums[i];
            int second = target - first;
            if (m.find(second) != m.end()) {
                store.push_back(i);
                store.push_back(m[second]);
            }
            m[first] = i;
        }
        return store;
    }
};