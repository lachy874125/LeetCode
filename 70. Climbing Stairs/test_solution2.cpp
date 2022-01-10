#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test solution") {
	Solution solution;

	SECTION("Test climbStairs") {
		REQUIRE(solution.climbStairs(1) == 1);
		REQUIRE(solution.climbStairs(2) == 2);
		REQUIRE(solution.climbStairs(3) == 3);
		REQUIRE(solution.climbStairs(4) == 5);
		REQUIRE(solution.climbStairs(5) == 8);
		REQUIRE(solution.climbStairs(29) == 832040);
		REQUIRE(solution.climbStairs(45) == 1836311903);
	}
}