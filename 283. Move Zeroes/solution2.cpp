#include "solution2.hpp"

void Solution::moveZeroes(std::vector<int>& nums) {
	auto end_non_zeros{nums.begin()};	// End of non-zero section

	// Pull all non-zero elements to front
	for (auto i{nums.begin()}; i != nums.end(); ++i) {
		if (*i != 0) {
			*end_non_zeros = *i;
			end_non_zeros++;
		}
	}

	// Fill end section with zeros
	std::fill(end_non_zeros, nums.end(), 0);
	return;
}