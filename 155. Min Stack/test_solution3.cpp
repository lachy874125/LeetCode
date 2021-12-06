#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "solution3.hpp"


TEST_CASE("LeetCode") {
	MinStack min_stack;
	min_stack.push(2147483646);
	min_stack.push(2147483646);
	min_stack.push(2147483646);
	min_stack.top();
	min_stack.pop();
	min_stack.getMin();
	min_stack.pop();
	min_stack.getMin();
	min_stack.pop();
	min_stack.push(2147483646);
	min_stack.top();
	min_stack.getMin();
	min_stack.push(-2147483648);
	min_stack.top();
	min_stack.getMin();
	min_stack.pop();
	min_stack.getMin();
}

/*
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
*/
/*
["MinStack","push","push","push","top","pop","getMin","pop","getMin","pop","push","top","getMin","push","top","getMin","pop","getMin"]
[[],[2147483646],[2147483646],[2147483647],[],[],[],[],[],[],[2147483647],[],[],[-2147483648],[],[],[],[]]
*/