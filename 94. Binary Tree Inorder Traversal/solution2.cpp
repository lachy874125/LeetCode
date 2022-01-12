#include "solution2.hpp"

std::vector<int> Solution::inorderTraversal(TreeNode* root) {
	if (!root) return std::vector<int>{};

	std::vector<int> result;
	std::stack<TreeNode*> stack;
	auto curr{root};

	while (curr || !stack.empty()) {
		// Move left as far as possible
		while (curr) {
			stack.push(curr);
			curr = curr->left;
		}
		curr = stack.top();
		stack.pop();

		// Store value and move right
		result.emplace_back(curr->val);
		curr = curr->right;
	}

	return result;
}