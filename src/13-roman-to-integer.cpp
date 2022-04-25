#include "headers.h"

class Solution {
   public:
    int romanToInt(string s) {
        int res{};
        map<char, int> m{{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50},
                         {'X', 10},   {'V', 5},   {'I', 1}};
        for (int i{}; i < s.size(); i++) {
            if ((s[i + 1] != '\0') && (m[s[i]] < m[s[i + 1]])) {
                res -= m[s[i]];
            } else {
                res += m[s[i]];
            }
        }
        return res;
    }
};

