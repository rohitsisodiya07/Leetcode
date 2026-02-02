class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for (auto ch : nums) {

            if (ch == 0)
                zero++;
            else if (ch == 1)
                one++;
            else
                two++;
        }
        int i = 0;
        while (zero) {
            nums[i] = 0;
            i++;
            zero--;
        }
        while (one) {
            nums[i] = 1;
            i++;
            one--;
        }
        while (two) {
            nums[i] = 2;
            i++;
            two--;
        }
    
    }
};