#include "solution1.hpp"

ListNode* Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
	std::unordered_set<ListNode*> set;
	while (headA) {
		set.emplace(headA);
		headA = headA->next;
	}
	while (headB) {
		if (set.count(headB)) return headB;
		headB = headB->next;
	}
	return nullptr;
}