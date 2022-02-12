#include <unordered_map>

class Node {
public:
	int val;
	Node* next{};
	Node* random{};

	Node(int _val) : val{_val} {}
};

class Solution {
public:
	Node* copyRandomList(Node* head);
};