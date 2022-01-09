#include "solution1.hpp"

int Solution::diameterOfBinaryTree(TreeNode* root) {
	if (!root) return 0;

	// Root case
	if (!root_done) {
		root_done = true;
		return std::max({diameterOfCurrNode(root), diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)});
	}

	// 2 children
	if (root->left && root->right) {
		return std::max({diameterOfCurrNode(root), diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)});
	}

	// Left or right child
	if (root->left) return diameterOfBinaryTree(root->left);
	if (root->right) return diameterOfBinaryTree(root->right);

	// No children
	return 0;
}

int Solution::diameterOfCurrNode(TreeNode* node) {
	return deepestNode(node->left) + deepestNode(node->right);
}

int Solution::deepestNode(TreeNode* node) {
	if (!node) return 0;
	return std::max(deepestNode(node->left),deepestNode(node->right)) + 1;
}