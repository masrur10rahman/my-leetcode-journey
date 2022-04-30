#include "headers.h"

class Solution {
   public:
    int numberOfSteps(int num) {
        int result{};
        while (num) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num -= 1;
            }
            ++result;
        }
        return result;
    }
};
