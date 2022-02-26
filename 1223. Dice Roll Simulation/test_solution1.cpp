#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::vector<int> rollMax;

	rollMax = {1,1,1,2,2,3};
	REQUIRE(solution.dieSimulator(1, rollMax) == 6);
	REQUIRE(solution.dieSimulator(2, rollMax) == 33);
	REQUIRE(solution.dieSimulator(3, rollMax) == 181);
	REQUIRE(solution.dieSimulator(4, rollMax) == 991);
	REQUIRE(solution.dieSimulator(100, rollMax) == 163354136);
}