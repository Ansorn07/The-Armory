#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxValue = nums[0]; // start with first element
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxValue) {
                maxValue = nums[i];
            }
        }
        return maxValue;
    }
};

int main() {
    Solution obj; // create object of Solution
    vector<int> nums = {3, 3, 0, 99, -40};
    cout << obj.largestElement(nums) << endl; 
    return 0;
}
