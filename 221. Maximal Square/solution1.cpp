#include "solution1.hpp"

int Solution::maximalSquare(std::vector<std::vector<char>>& matrix) {
	int max_edge{0};
	for (std::size_t y{0}; y != matrix.size(); ++y) {
		for (std::size_t x{0}; x != matrix[0].size(); ++x) {
			if (matrix[y][x] == '1' && matrix.size() - y > max_edge && matrix[0].size() - x > max_edge) {
				auto square_edge{squareEdge(matrix, y, x)};
				max_edge = std::max(max_edge, square_edge);
			}
		}
	}
	return max_edge * max_edge;
}

int Solution::squareEdge(std::vector<std::vector<char>>& matrix, std::size_t y, std::size_t x) {
	int curr_edge{1};  // length of square edge so far
	auto y_bottom{y + 1};
	auto x_right{x + 1};

	while (true) {
		// Scan bottom edge for zeros
		if (y_bottom == matrix.size()) return curr_edge;
		for (auto i{x}; i != x + curr_edge; ++i) {
			if (i == matrix[0].size() || matrix[y_bottom][i] == '0') return curr_edge;
		}

		// Scan right edge
		if (x_right == matrix[0].size()) return curr_edge;
		for (auto i{y}; i != y + curr_edge; ++i) {
			if (i == matrix.size() || matrix[i][x_right] == '0') return curr_edge;
		}

		// Scan bottom-right corner
		if (matrix[y_bottom][x_right] == '0') return curr_edge;

		// curr_edge++
		++curr_edge;
		++y_bottom;
		++x_right;
	}
	return curr_edge;
}