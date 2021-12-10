#include "solution2.hpp"

ListNode* Solution::reverseList(ListNode* head) {
	// Handle 0 or 1 sized linked list
	if (!head) return head;
	if (!head->next) return head;

	// Setup previous, current, next pointers
	ListNode* prev{};
	auto curr{head};
	auto next{curr->next};

	// Reverse linked list
	while (next) {
		curr->next = prev;
		prev = curr;
		curr = next;
		next = curr->next;
	}
	// Handle end of list
	curr->next = prev;
	return curr;
}