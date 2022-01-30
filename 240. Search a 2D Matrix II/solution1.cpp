#include "solution1.hpp"

bool Solution::searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
	if (matrix.size() <= matrix[0].size()) {  // cols <= rows
		for (size_t col{0}; col < matrix.size(); ++col) {
			if (binarySearchRows(matrix, col, target)) return true;
		}
		return false;
	} else {  // rows < cols
		for (size_t row{0}; row < matrix[0].size(); ++row) {
			if (binarySearchCols(matrix, row, target)) return true;
		}
		return false;
	}
}

bool Solution::binarySearchRows(std::vector<std::vector<int>>& matrix, size_t col, int& target) {
	int start{0}, end{static_cast<int>(matrix[0].size()) - 1};
	while (start <= end) {
		auto mid{(start + end) >> 1};
		if (matrix[col][mid] == target) return true;
		if (matrix[col][mid] < target) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return false;
}

bool Solution::binarySearchCols(std::vector<std::vector<int>>& matrix, size_t row, int& target) {
	int start{0}, end{static_cast<int>(matrix.size()) - 1};
	while (start <= end) {
		auto mid{(start + end) >> 1};
		if (matrix[mid][row] == target) return true;
		if (matrix[mid][row] < target) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return false;
}