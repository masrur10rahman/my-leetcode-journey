#include "headers.h"

class Solution {
   public:
    int search(vector<int>& nums, int target) {
        auto pos = std::find_if(nums.begin(), nums.end(),
                                [target](auto a) { return a == target; });
        auto v   = pos - nums.begin();
        if (v == nums.size()) return -1;
        return v;
    }
};
