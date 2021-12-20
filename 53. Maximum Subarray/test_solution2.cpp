#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution2.hpp"

TEST_CASE("Test MaxSubArray") {
	Solution solution;
	std::vector<int> input1{-2, 1, -3, 4, -1, 2, 1, -5, 4};
	std::vector<int> input2{1};
	std::vector<int> input3{5, 4, -1, 7, 8};
	std::vector<int> input4{-2, 1};

	REQUIRE(solution.maxSubArray(input1) == 6);
	REQUIRE(solution.maxSubArray(input2) == 1);
	REQUIRE(solution.maxSubArray(input3) == 23);
	REQUIRE(solution.maxSubArray(input4) == 1);
}