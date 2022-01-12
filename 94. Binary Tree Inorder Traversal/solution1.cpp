#include "solution1.hpp"

std::vector<int> Solution::inorderTraversal(TreeNode* root) {
	if (!root) return std::vector<int>{};
	std::vector<int> values;
	inorderTraversalRecursive(values, root);
	return values;
}

void Solution::inorderTraversalRecursive(std::vector<int>& values, TreeNode* root) {
	// Left
	if (root->left)	inorderTraversalRecursive(values, root->left);

	// Middle
	values.emplace_back(root->val);

	// Right
	if (root->right) inorderTraversalRecursive(values, root->right);
	
	return;
}