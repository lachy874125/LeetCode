#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	int diameter{};
	bool root_done{};
    int diameterOfBinaryTree(TreeNode* root);
	int diameterOfCurrNode(TreeNode* node);
	int deepestNode(TreeNode* node);
};