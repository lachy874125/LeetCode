#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

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

TEST_CASE("Test merged sort") {
	Solution solution;

	SECTION("Test both empty") {
		ListNode* list1;
		ListNode* list2;
		auto head = solution.mergeTwoLists(list1, list2);
		REQUIRE(printList(head).str() == "");
	}

	SECTION("One empty") {
		ListNode* list1 = new ListNode(5);
		for (auto i = 4; i > 0; i--) {
			list1 = new ListNode(i,list1);
		}
		ListNode* list2;

		auto head = solution.mergeTwoLists(list1, list2);
		REQUIRE(printList(head).str() == "1 2 3 4 5");
	}

	SECTION("Both non-empty") {
		ListNode* list1 = new ListNode(5);
		for (auto i = 4; i > 0; i--) {
			list1 = new ListNode(i,list1);
		}
		ListNode* list2 = new ListNode(10);
		for (auto i = 9; i > 0; i--) {
			list2 = new ListNode(i,list2);
		}

		auto head = solution.mergeTwoLists(list1, list2);
		REQUIRE(printList(head).str() == "1 1 2 2 3 3 4 4 5 5 6 7 8 9 10");
	}
}