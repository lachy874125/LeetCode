#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test some inputs") {
	Solution solution;
	std::vector<int> input1{2,7,11,15}, output1{0,1};
	std::vector<int> input2{3,2,4}, output2{1,2};
	std::vector<int> input3{3,3}, output3{0,1};

	REQUIRE(solution.twoSum(input1, 9) == output1);
	REQUIRE(solution.twoSum(input2, 6) == output2);
	REQUIRE(solution.twoSum(input3, 6) == output3);
}