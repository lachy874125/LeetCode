#include "solution2.hpp"

bool Solution::hasCycle(ListNode *head) {
	// Handle case of list size = 0
	if (!head) return false;
	
	// Fast and slow runners will meet eventually if there is a loop
	auto fast = head;
	auto slow = head;
	while (fast != nullptr && fast->next != nullptr) {
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow) return true;
	}
	return false;
}