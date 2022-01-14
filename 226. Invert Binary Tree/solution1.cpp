#include "solution1.hpp"

TreeNode* Solution::invertTree(TreeNode* root) {
	if (!root) return nullptr;
	
	// Swap children
	auto temp{root->left};
	root->left = root->right;
	root->right = temp;

	// Call on children
	if (root->left) invertTree(root->left);
	if (root->right) invertTree(root->right);
	return root;
}