struct TreeNode {
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

	int val;
	TreeNode *left;
	TreeNode *right;
};

class Solution {
public:
    bool isSymmetric(TreeNode* root);

private:
	void currNodeOK(TreeNode* left_node, TreeNode* right_node);
	bool flag_symmetric{true};
};