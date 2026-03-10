class Solution {
public:
    int titleToNumber(string columnTitle) {

        int sum = 0;
        for (auto ch : columnTitle) {

                sum = sum * 26 + (ch - 65 + 1);
            
        }
        return sum;
    }
};