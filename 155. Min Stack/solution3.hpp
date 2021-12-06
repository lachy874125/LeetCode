#include <cstddef>

class MinStack {
public:
	MinStack();
	void push(int val);
	void pop();
	int top();
	int getMin();
	~MinStack();

private:
	class Node {
	public:
		Node* prev{};
		Node* next{};
		int val;
		int min;
	};
	Node* tail{};
	size_t length{};
};