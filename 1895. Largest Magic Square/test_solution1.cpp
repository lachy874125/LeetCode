#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::vector<std::vector<int>> grid;
	
	grid = {{7,1,4,5,6},{2,5,1,6,4},{1,5,4,3,2},{1,2,7,3,4}};
	REQUIRE(solution.largestMagicSquare(grid) == 3);

	grid = {{1,1,1,4},{4,6,9,2}};
	REQUIRE(solution.largestMagicSquare(grid) == 1);
}