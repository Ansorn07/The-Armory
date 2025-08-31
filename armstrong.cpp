class Solution {
public:
    bool isArmstrong(int n) {
        int original = n;
        int d = 0;

        // Step 1: count number of digits
        int temp = n;
        while (temp > 0) {
            d++;
            temp /= 10;
        }

        // Step 2: calculate sum of digits^d
        int sum = 0;
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, d);
            temp /= 10;
        }

        // Step 3: check
        return sum == original;
    }
};
