#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	REQUIRE(solution.numTrees(1) == 1);
	REQUIRE(solution.numTrees(2) == 2);
	REQUIRE(solution.numTrees(3) == 5);
	REQUIRE(solution.numTrees(4) == 14);
	REQUIRE(solution.numTrees(5) == 40);
}