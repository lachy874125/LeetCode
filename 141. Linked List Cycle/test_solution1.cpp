#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test hasCycle") {
	Solution solution;

	// Brackets around a node indicate the last node points to the bracketed node
	SECTION("3 (2) 0 -4") {
		auto head = new ListNode(3);
		head->next = new ListNode(2);
		head->next->next = new ListNode(0);
		head->next->next->next = new ListNode(-4);
		head->next->next->next->next = head->next;
		REQUIRE(solution.hasCycle(head) == true);
	}

	SECTION("(1) 2") {
		auto head = new ListNode(1);
		head->next = new ListNode(2);
		head->next->next = head;
		REQUIRE(solution.hasCycle(head) == true);
	}

	SECTION("") {
		auto head = nullptr;
		REQUIRE(solution.hasCycle(head) == false);
	}

	SECTION("1") {
		auto head = new ListNode(1);
		REQUIRE(solution.hasCycle(head) == false);
	}

	SECTION("1 2") {
		auto head = new ListNode(1);
		head->next = new ListNode(2);
		REQUIRE(solution.hasCycle(head) == false);
	}

	SECTION("1 2 3") {
		auto head = new ListNode(1);
		head->next = new ListNode(2);
		head->next->next = new ListNode(3);
		REQUIRE(solution.hasCycle(head) == false);
	}

	SECTION("1 2 (3) 4") {
		auto head = new ListNode(1);
		head->next = new ListNode(2);
		head->next->next = new ListNode(3);
		head->next->next->next = new ListNode(4);
		head->next->next->next->next = head->next->next;
	}

	SECTION("1 2 3 (4)") {
		auto head = new ListNode(1);
		head->next = new ListNode(2);
		head->next->next = new ListNode(3);
		head->next->next->next = new ListNode(4);
		head->next->next->next->next = head->next->next->next;
	}
}