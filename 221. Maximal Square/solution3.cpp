#include "solution3.hpp"

int Solution::maximalSquare(std::vector<std::vector<char>>& matrix) {
	std::vector<int> square_size(matrix[0].size());
	int max_square{0};

	// Copy top row
	for (std::size_t x{0}; x != matrix[0].size(); ++x) {
		if (matrix[0][x] == '1') {
			max_square = 1;
			square_size[x] = 1;
		} else {
			square_size[x] = 0;
		}
	}

	// For each row
	for (std::size_t y{1}; y != matrix.size(); ++y) {
		// Copy left cell
		auto temp{square_size[0]};	// matrix[y-1][x-1]
		if (matrix[y][0] == '1') {
			square_size[0] = 1;
			if (max_square == 0) max_square = 1;
		} else {
			square_size[0] = 0;
		}

		// Dynamic programming loop
		for (std::size_t x{1}; x != matrix[0].size(); ++x) {
			auto next_temp{square_size[x]};	// // matrix[y-1][x-1] for next iteration
			if (matrix[y][x] == '1') {
				square_size[x] = std::min({square_size[x - 1], square_size[x], temp}) + 1;
				if (square_size[x] > max_square) max_square = square_size[x];
			} else {
				square_size[x] = 0;
			}
			temp = next_temp;
		}
	}
	return max_square * max_square;
}