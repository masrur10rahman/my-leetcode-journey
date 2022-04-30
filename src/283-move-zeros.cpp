#include "headers.h"

class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        for (int i{}, pos{}; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[pos], nums[i]);
                pos++;
            }
        }
    }
};
