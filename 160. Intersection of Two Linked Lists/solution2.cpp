#include "solution2.hpp"

ListNode* Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
	auto ptrA{headA};
	auto ptrB{headB};

	while (ptrA != ptrB) {
		ptrA = ptrA ? ptrA->next : headB;
		ptrB = ptrB ? ptrB->next : headA;
	}
	return ptrA;
}