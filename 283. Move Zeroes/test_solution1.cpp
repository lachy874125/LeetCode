#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;

	std::vector<int> input1 {0,1,0,3,12};
	std::vector<int> output1 {1,3,12,0,0};
	solution.moveZeroes(input1);
	REQUIRE(input1 == output1);

	std::vector<int> input2 {3};
	std::vector<int> output2 {3};
	solution.moveZeroes(input2);
	REQUIRE(input2 == output2);
	
	std::vector<int> input3 {0};
	std::vector<int> output3 {0};
	solution.moveZeroes(input3);
	REQUIRE(input3 == output3);
}