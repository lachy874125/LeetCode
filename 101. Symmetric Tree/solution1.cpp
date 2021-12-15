#include "solution1.hpp"

bool Solution::isSymmetric(TreeNode* root) {
	if (root->left && !root->right || !root->left && root->right) return false;	// only left or only right
	if (!root->left && !root->right) return true;								// no children
	
	currNodeOK(root->left, root->right);										// both children exist
	return flag_symmetric;
}

void Solution::currNodeOK(TreeNode* left_node, TreeNode* right_node) {
	// Check left and right node values are equal
	if (left_node->val != right_node->val) {
		flag_symmetric = false;
		return;
	}

	// Check for unsymmetric children
	if (left_node->left && !right_node->right || !left_node->left && right_node->right) {
		flag_symmetric = false;
		return;
	}
	if (left_node->right && !right_node->left || !left_node->right && right_node->left) {
		flag_symmetric = false;
		return;
	}

	// If both outer children exist
	if (left_node->left && right_node->right) currNodeOK(left_node->left, right_node->right);
	if (!flag_symmetric) return;

	// If both inner children exist
	if (left_node->right && right_node->left) currNodeOK(left_node->right, right_node->left);

	return;
}