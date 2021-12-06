#include "solution1.hpp"

MinStack::MinStack() {};

void MinStack::push(int val) {
	stack.push_back(val);
}

void MinStack::pop() {
	stack.pop_back();
}

int MinStack::top() {
	return stack.back();
}

int MinStack::getMin() {
	min = stack.at(0);
	for (auto i = stack.begin() + 1; i != stack.end(); i++) {
		if (*i < min) min = *i;
	}
	return min;
}