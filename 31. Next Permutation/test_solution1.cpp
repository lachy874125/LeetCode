#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;

	std::vector<int> input1{1, 2, 3, 4};
	solution.nextPermutation(input1);
	REQUIRE(input1 == std::vector<int>{1, 2, 4, 3});

	std::vector<int> input2{1, 4, 3, 2};
	solution.nextPermutation(input2);
	REQUIRE(input2 == std::vector<int>{2, 1, 3, 4});

	std::vector<int> input3{2, 3, 1};
	solution.nextPermutation(input3);
	REQUIRE(input3 == std::vector<int>{3, 1, 2});

	std::vector<int> input4{2, 3, 1, 3, 3};
	solution.nextPermutation(input4);
	REQUIRE(input4 == std::vector<int>{2, 3, 3, 1, 3});
}