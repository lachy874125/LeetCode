#include "solution1.hpp"

// Find smallest dimension
// Check each square size from smallest dimension to size 2

bool Solution::isMagic(std::vector<std::vector<int>>& grid, int& sq_size, int& y, int& x) {
	int magic_sum{0};
	// Sum top row
	for (auto x1{0}; x1 < sq_size; ++x1) {
		magic_sum += grid[y][x + x1];
	}
	// Check other rows
	for (auto y1{1}; y1 < sq_size; ++y1) {
		auto row_sum{0};
		for (auto x1{0}; x1 < sq_size; ++x1) {
			row_sum += grid[y + y1][x + x1];
		}
		if (row_sum != magic_sum) return false;
	}

	// Check columns
	for (auto x1{0}; x1 < sq_size; ++x1) {
		auto col_sum{0};
		for (auto y1{0}; y1 < sq_size; ++y1) {
			col_sum += grid[y + y1][x + x1];
		}
		if (col_sum != magic_sum) return false;
	}

	// Check top left diagonal
	auto diag_sum{0};
	for (auto x1{0}; x1 < sq_size; ++x1) {
		diag_sum += grid[y + x1][x + x1];
	}
	if (diag_sum != magic_sum) return false;

	// Check top right diagonal
	diag_sum = 0;
	for (auto x1{0}; x1 < sq_size; ++x1) {
		diag_sum += grid[y + x1][x + sq_size - x1 - 1];
	}
	if (diag_sum != magic_sum) return false;

	// All tests passed
	return true;
}

int Solution::largestMagicSquare(std::vector<std::vector<int>>& grid) {
	for (int sq_size{std::min(static_cast<int>(grid.size()), static_cast<int>(grid[0].size()))}; sq_size > 1; --sq_size) {	// for each square size descending
		for (int y{0}; y <= grid.size() - sq_size; ++y) {
			for (int x{0}; x <= grid[0].size() - sq_size; ++x) {
				if (isMagic(grid, sq_size, y, x)) return sq_size;
			}
		}
	}
	return 1;
}