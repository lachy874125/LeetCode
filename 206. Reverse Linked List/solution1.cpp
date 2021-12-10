#include "solution1.hpp"

ListNode* Solution::reverseList(ListNode* head) {
	if (!head) return nullptr;
	if (!head->next) return head;

	// Store vector of node address from head to tail
	std::vector<ListNode*> node_addresses;
	ListNode* node{head};
	while (node->next) {
		node_addresses.push_back(node);
		node = node->next;
	}
	head = node;	// new head = old tail

	// Reverse linked list using stored node addresses from tail to head
	for (auto it = node_addresses.rbegin(); it != node_addresses.rend(); it++) {
		node->next = *it;
		node = node->next;
	}
	node->next = nullptr;

	return head;
}

void Solution::printList(ListNode* head) {
	// Handle first value
	if (!head) return;
	std::cout << head->val;
	head = head->next;

	// Print remaining values
	while (head) {
		std::cout << " " << head->val;
		head = head->next;
	}
	std::cout << std::endl;
}

int main() {
	auto node1 = new ListNode();
	auto head = node1;
	node1->val = 1;

	auto node2 = new ListNode();
	node1->next = node2;
	node2->val = 2;

	auto node3 = new ListNode();
	node2->next = node3;
	node3->val = 3;

	Solution solution;

	solution.printList(head);
	head = solution.reverseList(node1);
	solution.printList(head);
}