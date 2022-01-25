#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution2.hpp"

TEST_CASE("Test Solution") {
	Solution solution;

	std::vector<int> input1{2, -5, 4, -7, -6, 3, 0, 1, 2, -8};
	REQUIRE(solution.maxProduct(input1) == 504);

	std::vector<int> input2{2, 5, 4, 7, 6, 3, 0, 1, 2, 8};
	REQUIRE(solution.maxProduct(input2) == 5040);

	std::vector<int> input3{0,1};
	REQUIRE(solution.maxProduct(input3) == 1);

	std::vector<int> input4{0,-1};
	REQUIRE(solution.maxProduct(input4) == 0);

	std::vector<int> input5{-1};
	REQUIRE(solution.maxProduct(input5) == -1);
}