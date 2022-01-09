#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test solution") {
	Solution solution;
	
	TreeNode* root = new TreeNode(1);

	SECTION("Test 1") {
		root->left = new TreeNode(2);
		root->right = new TreeNode(3);
		root->left->left = new TreeNode(4);
		root->left->right = new TreeNode(5);
		REQUIRE(solution.diameterOfBinaryTree(root) == 3);
	}

	SECTION("Test 2") {
		root->left = new TreeNode(2);
		REQUIRE(solution.diameterOfBinaryTree(root) == 1);
	}

	SECTION("Test 3") {
		REQUIRE(solution.diameterOfBinaryTree(root) == 0);
	}
}