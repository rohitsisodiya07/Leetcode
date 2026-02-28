class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int length = 0;
        for (auto ch : nums) {

            if (ch == 1){
                count++;
                length = max(length, count);
            }
            else {
                count = 0;
            }
        }
        return length ;
    }
};