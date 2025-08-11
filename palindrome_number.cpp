
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Handle negatives and numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed_half = 0;
        while (x > reversed_half) {
            int digit = x % 10;
            reversed_half = reversed_half * 10 + digit;
            x /= 10;
        }

        return (x == reversed_half || x == reversed_half / 10);
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isPalindrome(121) << endl;   // true
    cout << boolalpha << sol.isPalindrome(-121) << endl;  // false
    cout << boolalpha << sol.isPalindrome(10) << endl;    // false
}
