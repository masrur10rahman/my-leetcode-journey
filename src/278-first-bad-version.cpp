#include "headers.h"

bool isBadVersion(int n) {
    int bad /*= the bad number*/;
    return n == bad;
}

class Solution {
   public:
    int firstBadVersion(int n) {
        int l{}, r = n;
        while (l < r) {
            int mid = l + ((r - l) / 2);
            if (isBadVersion(mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};

