#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "solution1.hpp"

TEST_CASE("Test some inputs") {
	Solution test_single_number;
	std::vector<int> input1 {2,2,1};
	std::vector<int> input2 {4,1,2,1,2};
	std::vector<int> input3 {1};
	std::vector<int> input4 {-8,7,-1,3,7,-8,-1};
	REQUIRE(test_single_number.singleNumber(input1) == 1);
	REQUIRE(test_single_number.singleNumber(input2) == 4);
	REQUIRE(test_single_number.singleNumber(input3) == 1);
	REQUIRE(test_single_number.singleNumber(input4) == 3);
}