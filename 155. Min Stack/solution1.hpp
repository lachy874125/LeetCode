#include <iostream>
#include <vector>

class MinStack {
public:
	MinStack();

	void push(int val);

	void pop();

	int top();

	int getMin();

private:
	std::vector<int> stack;
	int min;
};