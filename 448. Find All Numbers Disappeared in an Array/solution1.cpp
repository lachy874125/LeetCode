#include "solution1.hpp"

std::vector<int> Solution::findDisappearedNumbers(std::vector<int>& nums) {
	// Erase train
	for (auto i{0}; i < nums.size(); ++i) {
		auto erase_next{abs(nums[i]) - 1};
		while (nums[erase_next] > 0) {
			nums[erase_next] = -nums[erase_next];
			erase_next = abs(nums[erase_next]) - 1;
		}
	}

	// Build vector of missing numbers
	std::vector<int> missing;
	for (auto i{0}; i < nums.size(); ++i) {
		if (nums[i] > 0) missing.emplace_back(i + 1);
	}
	return missing;
}