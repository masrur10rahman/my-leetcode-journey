#include "headers.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
   public:
    bool isPalindrome(ListNode *head) {
        if (head->next == nullptr) return true;
        vector<int> store;
        auto another = head;
        while (another) {
            store.push_back(another->val);
            another = another->next;
        }
        int mid = store.size() / 2;
        for (int i{}; i < mid; i++) {
            if (store[i] != store[store.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
