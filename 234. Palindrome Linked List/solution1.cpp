#include "solution1.hpp"

bool Solution::isPalindrome(ListNode* head) {
	// Get list length
	auto curr{head};
	int list_length{0};
	while (curr) {
		list_length++;
		curr = curr->next;
	}
	
	// Get starting position of reverse pointer
	int idx_rev;
	if (list_length % 2 == 0) {
		idx_rev = (list_length >> 1) - 1;
	} else {
		idx_rev = ((list_length - 1) >> 1) - 1;
	}

	// Reverse the linked list up to idx_rev
	// Handle 0 or 1 sized linked list
	if (!head) return head;
	if (!head->next) return head;

	// Setup previous, current, next pointers
	ListNode* prev{};
	curr = head;
	auto next{curr->next};

	auto count{0};

	// Reverse linked list
	while (next && count < idx_rev) {
		curr->next = prev;
		prev = curr;
		curr = next;
		next = curr->next;
		count++;
	}
	// Position forward pointer
	ListNode* for_ptr;
	if (list_length % 2 == 0) {
		for_ptr = curr->next;
	} else {
		for_ptr = curr->next->next;
	}

	// Final reversal
	curr->next = prev;

	// Check palindrome
	while (for_ptr) {
		if (for_ptr->val != curr->val) return false;
		for_ptr = for_ptr->next;
		curr = curr->next;
	}
	return true;
}