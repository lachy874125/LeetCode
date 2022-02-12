#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	
	std::vector<std::vector<int>> input;
	std::vector<int> output;

	input = {{1,0},{2,0},{3,1},{3,2}};
	output = {0,1,2,3};
	REQUIRE(solution.findOrder(4,input) == output);

	input = {{4,2},{1,0},{5,4},{3,2},{3,1},{2,0},{5,3}};
	output = {0,1,2,3,4,5};
	REQUIRE(solution.findOrder(6,input) == output);

	input = {{4,2},{3,1},{3,2},{0,4},{1,0},{2,0}};
	output = {};
	REQUIRE(solution.findOrder(5,input) == output);

	input = {};
	output = {0,1,2};
	REQUIRE(solution.findOrder(3,input) == output);

	input = {{1,3}};
	output = {0,3,1,2};
	REQUIRE(solution.findOrder(4,input) == output);
}