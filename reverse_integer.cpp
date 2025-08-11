
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10; // last digit
            x /= 10;          // remove last digit

            // Check overflow before multiplying
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;

            rev = rev * 10 + pop;
        }
        return rev;
    }
};

int main() {
    Solution sol;
    cout << sol.reverse(123) << endl;     // Output: 321
    cout << sol.reverse(-123) << endl;    // Output: -321
    cout << sol.reverse(120) << endl;     // Output: 21
}
