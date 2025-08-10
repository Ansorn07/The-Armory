#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        // Step 1: Find largest
        for (int num : nums) {
            if (num > largest) {
                largest = num;
            }
        }

        // Step 2: Find second largest (must be smaller than largest)
        for (int num : nums) {
            if (num > secondLargest && num < largest) {
                secondLargest = num;
            }
        }

        // Step 3: If secondLargest not updated, return -1
        if (secondLargest == INT_MIN) {
            return -1;
        }
        return secondLargest;
    }
};

int main() {
    Solution obj;
    vector<int> nums1 = {8, 8, 7, 6, 5};
    cout << obj.secondLargestElement(nums1) << endl; // Output: 7

    vector<int> nums2 = {10, 10, 10, 10};
    cout << obj.secondLargestElement(nums2) << endl; // Output: -1
    return 0;
}
