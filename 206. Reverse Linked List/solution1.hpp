#include <vector>
#include <iostream>

struct ListNode {
	ListNode() : val{}, next{} {}
	ListNode(int x) : val{x}, next{} {}
	ListNode(int x, ListNode* next) : val{x}, next{next} {}

	int val;
	ListNode* next;
};

class Solution {
public:
	ListNode* reverseList(ListNode* head);
	void printList(ListNode* head);
};