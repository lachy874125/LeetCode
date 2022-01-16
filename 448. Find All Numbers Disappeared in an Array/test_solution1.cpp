#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;

	std::vector<int> input1{4,3,2,7,8,2,3,1};
	std::vector<int> output1{5,6};
	REQUIRE(solution.findDisappearedNumbers(input1) == output1);

	std::vector<int> input2{1,1};
	std::vector<int> output2{2};
	REQUIRE(solution.findDisappearedNumbers(input2) == output2);

	std::vector<int> input3{1};
	std::vector<int> output3{};
	REQUIRE(solution.findDisappearedNumbers(input3) == output3);
}