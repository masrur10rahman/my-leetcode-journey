#include "headers.h"

class Solution {
   public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.size() < ransomNote.size()) return false;
        for (auto pos_it = ransomNote.begin(); pos_it != ransomNote.end();
             pos_it++) {
            auto char_pos = magazine.find(*pos_it);
            if (char_pos == magazine.npos) {
                return false;
            } else {
                magazine.erase(char_pos, 1);
            }
        }
        return true;
    }
};
