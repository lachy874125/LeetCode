#define CATCH_CONFIG_MAIN
#include <map>

#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Inputs") {
	Solution test_solution{};

	REQUIRE(test_solution.isValid("()") == true);
	REQUIRE(test_solution.isValid("()[]{}") == true);
	REQUIRE(test_solution.isValid("(]") == false);
	REQUIRE(test_solution.isValid("([)]") == false);
	REQUIRE(test_solution.isValid("{()}") == true);
	REQUIRE(test_solution.isValid("{([]{})[]}") == true);
	REQUIRE(test_solution.isValid("(") == false);
	REQUIRE(test_solution.isValid(")") == false);
	REQUIRE(test_solution.isValid("(){}}{") == false);
}