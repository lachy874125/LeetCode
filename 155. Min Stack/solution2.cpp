#include "solution2.hpp"

MinStack::MinStack(){};

void MinStack::push(int val) {
	stack.push_back(val);
	if (min_stack.empty() || val <= min_stack.back()) {
		min_stack.push_back(val);
	} else {
		min_stack.push_back(min_stack.back());
	}
}

void MinStack::pop() {
	stack.pop_back();
	min_stack.pop_back();
}

int MinStack::top() {
	return stack.back();
}

int MinStack::getMin() {
	return min_stack.back();
}