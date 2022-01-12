#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	
	std::vector<int> input{7,1,5,3,6,4};
	REQUIRE(solution.maxProfit(input) == 5);

	input = {6,5,4,3,1};
	REQUIRE(solution.maxProfit(input) == 0);
	
	input = {6};
	REQUIRE(solution.maxProfit(input) == 0);
}