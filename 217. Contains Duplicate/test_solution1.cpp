#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test solution") {
	Solution solution;
	std::vector<int> input;

	input = {1,2,3,1};
	REQUIRE(solution.containsDuplicate(input) == true);

	input = {1,2,3,4};
	REQUIRE(solution.containsDuplicate(input) == false);

	input = {1,1,1,3,3,4,3,2,4,2};
	REQUIRE(solution.containsDuplicate(input) == true);

	input = {0};
	REQUIRE(solution.containsDuplicate(input) == false);
}