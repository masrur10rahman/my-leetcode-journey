#include "headers.h"

class Solution {
   public:
    int searchInsert(vector<int>& nums, int target) {
        int l{}, r = nums.size() - 1;
        if (target > nums[r]) {
            return r + 1;
        }
        while (l <= r) {
            int mid = ((r + l) / 2);
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            }
        }
        return l;
    }
};

