#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test solution") {
	Solution solution;

	std::vector<int> input1{3, 2, 3};
	std::vector<int> input2{2,2,1,2,1,2};
	std::vector<int> input3{2,2,1,1,1,2,2};
	std::vector<int> input4{6};

	REQUIRE(solution.majorityElement(input1) == 3);
	REQUIRE(solution.majorityElement(input2) == 2);
	REQUIRE(solution.majorityElement(input3) == 2);
	REQUIRE(solution.majorityElement(input4) == 6);
}