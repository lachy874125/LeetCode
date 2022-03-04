#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::vector<int> nums;

	nums = {1, 3, 4, 2, 2};
	REQUIRE(solution.findDuplicate(nums) == 2);

	nums = {1, 1};
	REQUIRE(solution.findDuplicate(nums) == 1);

	nums = {3, 1, 3, 4, 2};
	REQUIRE(solution.findDuplicate(nums) == 3);
}