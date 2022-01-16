#include "solution1.hpp"

void Solution::nextPermutation(std::vector<int>& nums) {
	// Edge case
	if (nums.size() == 1) return;

	// Start from rearmost two elements i1 & i2 and swap if i1 < i2
	// Iterate towards the front
	auto i2{nums.end()}, i1{i2 - 1};
	while (i1 != nums.begin()) {
		--i1;
		--i2;
		if (*i1 < *i2) {
			// Find next largest int to the right of i1 then swap
			i2 = nums.end() - 1;
			while (*i2 <= *i1) i2--;
			std::swap(*i1, *i2);
			
			// Reverse everything to the left of i1
			std::reverse(i1+1,nums.end());
			return;
		}
	}

	// Reverse everything if all in descending order
	std::reverse(i1,nums.end());
	return;
}