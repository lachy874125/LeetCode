#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution2.hpp"

TEST_CASE("Test TwoSum function") {
	Solution solution;

	std::vector<int> input1{2, 7, 11, 15};
	int target1 = 9;
	std::vector<int> output1{0, 1};
	REQUIRE(solution.twoSum(input1, target1) == output1);

	std::vector<int> input2{3, 2, 4};
	int target2 = 6;
	std::vector<int> output2{1, 2};
	REQUIRE(solution.twoSum(input2, target2) == output2);

	std::vector<int> input3{3, 3};
	int target3 = 6;
	std::vector<int> output3{0, 1};
	REQUIRE(solution.twoSum(input3, target3) == output3);

	std::vector<int> input4{0, 4, 3, 0};
	int target4 = 0;
	std::vector<int> output4{0, 3};
	REQUIRE(solution.twoSum(input4, target4) == output4);

	std::vector<int> input5{-3, 4, 3, 90};
	int target5 = 0;
	std::vector<int> output5{0, 2};
	REQUIRE(solution.twoSum(input5, target5) == output5);
}