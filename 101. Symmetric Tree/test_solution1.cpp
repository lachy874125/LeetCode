#define CATCH_CONFIG_MAIN
#include <iostream>
#include <string>
#include <vector>

#include "catch.hpp"
#include "solution1.hpp"

TreeNode* CreateBinaryTree(std::vector<std::string> input, size_t index, const unsigned int level) {
	if (input[index] == "null") return nullptr;
	TreeNode* node = new TreeNode(std::stoi(input[index]));

	if (input.size() >= (1 << level + 1)) {
		node->left = CreateBinaryTree(input, 2 * index + 1, level + 1);
		node->right = CreateBinaryTree(input, 2 * index + 2, level + 1);
	}

	return node;
}

TEST_CASE("Test solution") {
	Solution solution;
	std::vector<std::string> input1{"1", "2", "2", "3", "4", "4", "3"};
	std::vector<std::string> input2{"1", "2", "2", "null", "3", "null", "3"};
	std::vector<std::string> input3{"2","3","3","4","5","5", "null"};
	TreeNode* node1 = CreateBinaryTree(input1, 0, 0);
	TreeNode* node2 = CreateBinaryTree(input2, 0, 0);
	TreeNode* node3 = CreateBinaryTree(input3, 0, 0);

	REQUIRE(solution.isSymmetric(node1) == true);
	REQUIRE(solution.isSymmetric(node2) == false);
	REQUIRE(solution.isSymmetric(node3) == false);
}