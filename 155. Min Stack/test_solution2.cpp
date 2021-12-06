#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "solution2.hpp"

TEST_CASE("Push onto stack") {
	MinStack min_stack;
	min_stack.push(-2);
	REQUIRE(min_stack.top() == -2);
	min_stack.push(0);
	REQUIRE(min_stack.top() == 0);
	min_stack.push(-3);
	REQUIRE(min_stack.top() == -3);
	REQUIRE(min_stack.getMin() == -3);
	min_stack.pop();
	REQUIRE(min_stack.top() == 0);
	REQUIRE(min_stack.getMin() == -2);
}