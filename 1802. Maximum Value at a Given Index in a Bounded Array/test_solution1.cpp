#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	REQUIRE(solution.maxValue(6, 1, 10) == 3);
	REQUIRE(solution.maxValue(4, 2, 6) == 2);
	REQUIRE(solution.maxValue(6, 1, 31) == 7);
	REQUIRE(solution.maxValue(10, 4, 391799596) == 7);
}