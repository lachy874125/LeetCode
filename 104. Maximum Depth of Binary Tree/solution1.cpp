#include "solution1.hpp"

int Solution::maxDepthHelper(TreeNode* root, int curr_depth) {
	auto left_depth{curr_depth};
	auto right_depth{curr_depth};

	if (!root->left && !root->right) return curr_depth;

	if (root->left) left_depth = maxDepthHelper(root->left, curr_depth + 1);
	if (root->right) right_depth = maxDepthHelper(root->right, curr_depth + 1);

	return std::max(left_depth, right_depth);
}

int Solution::maxDepth(TreeNode* root) {
	if (!root) return 0;
	return maxDepthHelper(root, 1);
}