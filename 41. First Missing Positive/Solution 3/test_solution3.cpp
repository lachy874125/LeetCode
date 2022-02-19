#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution3.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::vector<int> input;

	input = {1, 2, 0};
	REQUIRE(solution.firstMissingPositive(input) == 3);

	input = {3, 4, -1, 1};
	REQUIRE(solution.firstMissingPositive(input) == 2);

	input = {7, 8, 9, 11, 12};
	REQUIRE(solution.firstMissingPositive(input) == 1);

	input = {5, 3, 2, 1};
	REQUIRE(solution.firstMissingPositive(input) == 4);

	input = {1};
	REQUIRE(solution.firstMissingPositive(input) == 2);
}