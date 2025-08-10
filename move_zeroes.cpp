#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0; // pointer for next non-zero position

        // Step 1: Move all non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                pos++;
            }
        }

        // Step 2: Fill the remaining positions with zero
        while (pos < nums.size()) {
            nums[pos] = 0;
            pos++;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution sol;
    sol.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
