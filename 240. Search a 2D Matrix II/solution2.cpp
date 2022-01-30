#include "solution1.hpp"

bool Solution::searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
	int col{0}, row{static_cast<int>(matrix[0].size()) - 1};	// top left corner
	while (col != matrix.size() && row != -1) {
		if (matrix[col][row] == target) return true;
		if (matrix[col][row] < target) {
			++col;
		} else {
			--row;
		}
	}
	return false;
}