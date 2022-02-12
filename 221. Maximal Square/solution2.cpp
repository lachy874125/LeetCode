#include "solution2.hpp"

int Solution::maximalSquare(std::vector<std::vector<char>>& matrix) {
	std::vector<std::vector<int>> square_size(matrix.size(), std::vector<int>(matrix[0].size()));
	int max_square{0};

	// Top border copy
	for (std::size_t x{0}; x != matrix[0].size(); ++x) {
		if (matrix[0][x] == '1') {
			max_square = 1;
			square_size[0][x] = 1;
		} else {
			square_size[0][x] = 0;
		}
	}

	// Left border copy
	for (std::size_t y{0}; y != matrix.size(); ++y) {
		if (matrix[y][0] == '1') {
			max_square = 1;
			square_size[y][0] = 1;
		} else {
			square_size[y][0] = 0;
		}
	}

	// Dynamic programming loop
	for (std::size_t y{1}; y != matrix.size(); ++y) {
		for (std::size_t x{1}; x != matrix[0].size(); ++x) {
			if (matrix[y][x] == '1') {
				square_size[y][x] = std::min({square_size[y][x - 1], square_size[y - 1][x], square_size[y - 1][x - 1]}) + 1;
				if (square_size[y][x] > max_square) max_square = square_size[y][x];
			} else {
				square_size[y][x] = 0;
			}
		}
	}
	return max_square * max_square;
}