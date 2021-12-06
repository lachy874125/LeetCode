#include "solution3.hpp"

#include <iostream>

MinStack::MinStack() {}

void MinStack::push(int val) {
	if (length == 0) {
		tail = new Node;
		tail->val = val;
		tail->min = val;
	} else {
		tail->next = new Node;
		tail->next->prev = tail;
		tail = tail->next;
		tail->val = val;
		if (tail->prev->min > val) {
			tail->min = val;
		} else {
			tail->min = tail->prev->min;
		}
	}
	length++;
}

void MinStack::pop() {
	if (!tail->prev) {
		delete tail;
	} else {
		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;
	}
	length--;
}

int MinStack::top() {
	return tail->val;
}

int MinStack::getMin() {
	return tail->min;
}

MinStack::~MinStack() {
	while (length > 1) {
		tail = tail->prev;
		delete tail->next;
		length--;
	}
	delete tail;
}