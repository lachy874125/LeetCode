#include "solution1.hpp"

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {
	// Both lists empty
	if (!list1 && !list2) return nullptr;

	// One list empty
	if (!list1) return list2;
	if (!list2) return list1;

	// Both lists non-empty
	ListNode* head;
	
	// Start merged list
	if (list1->val < list2->val) {
		head = list1;
		list1 = list1->next;
	} else {
		head = list2;
		list2 = list2->next;
	}
	auto curr = head;

	// Merge while both lists have not been iterated through
	while (list1 && list2) {
		if (list1->val < list2->val) {
			curr->next = list1;
			curr = curr->next;
			list1 = list1->next;
		} else {
			curr->next = list2;
			curr = curr->next;
			list2 = list2->next;
		}
	}

	// Link to remaining list
	if (!list1) {
		curr->next = list2;
	} else {
		curr->next = list1;
	}

	return head;
}