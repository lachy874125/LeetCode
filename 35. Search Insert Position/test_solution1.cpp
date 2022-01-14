#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test solution") {
	Solution solution;

	std::vector<int> input1{1, 3, 5, 6};
	REQUIRE(solution.searchInsert(input1, 5) == 2);
	REQUIRE(solution.searchInsert(input1, 2) == 1);
	REQUIRE(solution.searchInsert(input1, 7) == 4);

	std::vector<int> input2{1, 3, 5, 6, 9};
	REQUIRE(solution.searchInsert(input2, 5) == 2);
	REQUIRE(solution.searchInsert(input2, 2) == 1);
	REQUIRE(solution.searchInsert(input2, 7) == 4);

	std::vector<int> input3{1};
	REQUIRE(solution.searchInsert(input3, 5) == 1);
	REQUIRE(solution.searchInsert(input3, 0) == 0);

	std::vector<int> input4{1, 3};
	REQUIRE(solution.searchInsert(input4, 4) == 2);
}