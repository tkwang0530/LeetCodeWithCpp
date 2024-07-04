#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


ListNode* Solution::mergeNodes(ListNode* head) {
	ListNode* dummy = new ListNode(0);
        ListNode* ptr = dummy;
        ListNode* current = head->next;
        int runningSum = 0;
        while (current != nullptr) {
            if (current->val > 0) {
                runningSum += current->val;
            } else {
                ptr->next = new ListNode(runningSum);
                ptr = ptr->next;
                runningSum = 0;
            }
            current = current->next;
        }
        return dummy->next;
}
