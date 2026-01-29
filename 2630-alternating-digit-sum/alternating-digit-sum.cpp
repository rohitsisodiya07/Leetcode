class Solution {
public:
    int alternateDigitSum(int n) {

        int rev = 0;
        while (n) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        int sum = 0;
        int i = 0;
        while (rev) {
            int digit = rev % 10;
            if (i % 2 == 0)
                sum += digit;
            else
                sum += (-1 * digit);
            rev /= 10;
            i++;
        }
        return sum;
    }
};