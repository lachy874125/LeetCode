#include "solution1.hpp"

void Solution::moveZeroes(std::vector<int>& nums) {
	auto i1{nums.begin()};
	
	// Find first zero
	while (*i1 != 0) {
		++i1;
		if (i1 == nums.end()) return;
	}

	// Swap beginning of zero block with next non-zero value
	auto i2{i1 + 1};
	while (i2 != nums.end()) {
		if (*i2 != 0) {
			auto swap{*i2};
			*i2 = *i1;
			*i1 = swap;
			++i1;
		}
		++i2;
	}
	return;
}