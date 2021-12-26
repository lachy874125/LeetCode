#include "solution1.hpp"

bool Solution::hasCycle(ListNode *head) {
	// Handle cases of size 0 and 1 lists
	if (!head) return false;
	if (!head->next) return false;

	// Set each node->next = head
	// If we end up back at head there is a cycle
	// If we reach nullptr there is no cycle
	auto curr{head->next};
	auto next{curr->next};
	while (next) {
		if (next == head) return true;
		curr->next = head;
		curr = next;
		next = next->next;
	}
	return false;
}