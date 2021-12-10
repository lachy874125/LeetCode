#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution2.hpp"

#include <sstream>

// Prints a list (support function)
std::ostringstream printList(ListNode* head) {
	std::ostringstream ss;
	// Handle first value
	if (!head) return ss;
	ss << head->val;
	head = head->next;

	// Print remaining values
	while (head) {
		ss << " " << head->val;
		head = head->next;
	}

	return ss;
}

TEST_CASE("Test linked lists of various lengths") {
	ListNode* head{};
	Solution solution;

	SECTION("Length = 0") {
		REQUIRE(printList(head).str() == "");
		head = solution.reverseList(head);
		REQUIRE(printList(head).str() == "");
	}

	SECTION("Length = 1") {
		head = new ListNode{};
		head->val = 1;
		REQUIRE(printList(head).str() == "1");
		head = solution.reverseList(head);
		REQUIRE(printList(head).str() == "1");
	}

	SECTION("Length = 2") {
		head = new ListNode{};
		head->val = 1;
		head->next = new ListNode{};
		head->next->val = 2;
		REQUIRE(printList(head).str() == "1 2");
		head = solution.reverseList(head);
		REQUIRE(printList(head).str() == "2 1");
	}

	SECTION("Length = 5") {
		head = new ListNode{};
		head->val = 1;
		head->next = new ListNode{};
		head->next->val = 2;
		head->next->next = new ListNode{};
		head->next->next->val = 3;
		head->next->next->next = new ListNode{};
		head->next->next->next->val = 4;
		head->next->next->next->next = new ListNode{};
		head->next->next->next->next->val = 5;
	}
}