#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;

	std::vector<int> input1{1};
	REQUIRE(solution.rob(input1) == 1);

	std::vector<int> input2{1,2};
	REQUIRE(solution.rob(input2) == 2);

	std::vector<int> input3{1,3,1};
	REQUIRE(solution.rob(input3) == 3);

	std::vector<int> input4{2,3,2};
	REQUIRE(solution.rob(input4) == 4);

	std::vector<int> input5{1,2,3,1};
	REQUIRE(solution.rob(input5) == 4);

	std::vector<int> input6{2,7,9,3,1};
	REQUIRE(solution.rob(input6) == 12);

	std::vector<int> input7{2,7,9,100,1};
	REQUIRE(solution.rob(input7) == 107);

	std::vector<int> input8{7,2,9,100,1};
	REQUIRE(solution.rob(input8) == 107);

	std::vector<int> input9{7,2,1,9,100,30};
	REQUIRE(solution.rob(input9) == 108);

	std::vector<int> input10{7,3,2,1,9,100,45};
	REQUIRE(solution.rob(input10) == 109);

	std::vector<int> input11{100,1,1,1,1,1,80};
	REQUIRE(solution.rob(input11) == 182);
}