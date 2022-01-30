#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution2.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::vector<std::vector<int>> input{{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
	REQUIRE(solution.searchMatrix(input, 5) == true);
	REQUIRE(solution.searchMatrix(input, 20) == false);

	input = {{-5}};
	REQUIRE(solution.searchMatrix(input, -5) == true);
	REQUIRE(solution.searchMatrix(input, -10) == false);

	input = {{-1,3}};
	REQUIRE(solution.searchMatrix(input, 3) == true);
}