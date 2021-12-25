#include <algorithm>
#include <vector>

#define HASH_SIZE 10000

struct Node {
	Node(int val, int idx) : val(val), idx(idx) {}

	int val;
	int idx;
	Node* next{};
};

class Solution {
private:
	Node* hash_table[HASH_SIZE]{};

public:
	std::vector<int> twoSum(std::vector<int>& nums, int target);
	int Hash(const int& x);
	int SearchHash(const int& target);
	void CreateHashEntry(const int& num, const int& i);
};