class Solution {
public:
    int alternateDigitSum(int n) {

        int reverse = 0;
        while (n) {
            reverse = reverse * 10 + (n % 10);
            n /= 10;
        }
        int sum = 0;
        int i = 0;
        while (reverse) {
            int digit = reverse % 10;
            if (i % 2 == 0)
                sum += digit;
            else
                sum += (-1 * digit);
            reverse /= 10;
            i++;
        }
        return sum;
    }
};