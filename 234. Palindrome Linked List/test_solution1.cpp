#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

ListNode* createLinkedList(const std::vector<int>& x) {
	// Size zero
	if (x.empty()) return nullptr;

	// Build linked list
	ListNode* list{new ListNode(x.back())};
	for (auto i{x.rbegin() + 1}; i != x.rend(); i++) {
		list = new ListNode(*i, list);
	}
	return list;
}

TEST_CASE("Test isPalindrome") {
	Solution solution;

	SECTION("Empty linked list") {
		auto head{createLinkedList(std::vector<int>{})};
		REQUIRE(solution.isPalindrome(head) == false);
	}

	SECTION("Size = 1") {
		auto head{createLinkedList(std::vector<int>{1})};
		REQUIRE(solution.isPalindrome(head) == true);
	}

	SECTION("Size = 2, not palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 2})};
		REQUIRE(solution.isPalindrome(head) == false);
	}

	SECTION("Size = 2, palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 1})};
		REQUIRE(solution.isPalindrome(head) == true);
	}

	SECTION("Size = 3, not palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 2, 3})};
		REQUIRE(solution.isPalindrome(head) == false);
	}

	SECTION("Size = 3, palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 2, 1})};
		REQUIRE(solution.isPalindrome(head) == true);
	}

	SECTION("Size = 4, palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 2, 2, 1})};
		REQUIRE(solution.isPalindrome(head) == true);
	}

	SECTION("Size = 5, palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 2, 5, 2, 1})};
		REQUIRE(solution.isPalindrome(head) == true);
	}

	SECTION("Size = 5, not palindrome") {
		auto head{createLinkedList(std::vector<int>{1, 2, 5, 2, 0})};
		REQUIRE(solution.isPalindrome(head) == false);
	}
}