#include "headers.h"

class Solution {
   public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        transform(nums.begin(), nums.end(), back_inserter(result),
                  [](int a) -> int {
                      a = pow(a, 2);
                      return a;
                  });
        sort(result.begin(), result.end());
        return result;
    }
};

