struct ListNode {
	ListNode() : val{0}, next{nullptr} {}
	ListNode(int x) : val{x}, next{nullptr} {}
	ListNode(int x, ListNode* next) : val{x}, next{next} {}

	int val;
	ListNode* next;
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};