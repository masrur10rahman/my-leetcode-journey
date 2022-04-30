#include "headers.h"

class Solution {
   public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result{};
        for (auto& vec : accounts) {
            int sum = accumulate(vec.begin(), vec.end(), 0);
            if (sum > result) result = sum;
        }
        return result;
    }
};
