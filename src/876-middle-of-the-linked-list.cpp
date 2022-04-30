#include "headers.h"

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode* middleNode(ListNode* head) {
        if (head->next == nullptr) return head;
        int total{};
        auto result = head;
        while (head) {
            total++;
            head = head->next;
        }
        int mid = total / 2 + 1;
        for (int i{1}; i < mid; i++) {
            result = result->next;
        }
        return result;
    }
};
