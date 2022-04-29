#include "headers.h"

class Solution {
   public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for (int i{}; i < n; i++) {
            int a = i + 1;
            if (a % 3 == 0 && a % 5 == 0) {
                answer.push_back("FizzBuzz");
            } else if (a % 3 == 0) {
                answer.push_back("Fizz");
            } else if (a % 5 == 0) {
                answer.push_back("Buzz");
            } else {
                answer.push_back(to_string(a));
            }
        }
        return answer;
    }
};
