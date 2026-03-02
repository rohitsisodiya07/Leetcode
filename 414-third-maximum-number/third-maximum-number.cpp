class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long max = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;

        for (auto ch : nums) {

            if (ch == max || ch == second || ch == third)
                continue;

            if (ch > max) {
                third = second;
                second = max;
                max = ch;
            } else if (ch > second) {
                third = second;
                second = ch;
            } else if (ch > third) {
                third = ch;
            }
        }

        return third == LONG_MIN ? max : third;
    }
};