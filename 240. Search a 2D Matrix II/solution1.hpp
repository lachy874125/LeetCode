#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);
	bool binarySearchRows(std::vector<std::vector<int>>& matrix, size_t col, int& target);
	bool binarySearchCols(std::vector<std::vector<int>>& matrix, size_t row, int& target);
};