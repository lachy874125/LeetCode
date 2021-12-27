#include "solution1.hpp"

TreeNode* Solution::mergeTrees(TreeNode* root1, TreeNode* root2) {
	// At least one node doesn't exist
	if (!root1) return root2;
	if (!root2) return root1;

	// Both nodes exist
	root1->val += root2->val;
	root1->left = mergeTrees(root1->left, root2->left);
	root1->right = mergeTrees(root1->right, root2->right);

	return root1;
}