#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::vector<int> input;

	input = {4,5,6,7,0,1,2};
	REQUIRE(solution.search(input,4) == 0);
	REQUIRE(solution.search(input,5) == 1);
	REQUIRE(solution.search(input,6) == 2);
	REQUIRE(solution.search(input,7) == 3);
	REQUIRE(solution.search(input,0) == 4);
	REQUIRE(solution.search(input,1) == 5);
	REQUIRE(solution.search(input,2) == 6);
	REQUIRE(solution.search(input,3) == -1);
}