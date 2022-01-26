#include "solution1.hpp"

int Solution::rob(std::vector<int>& nums) {
	// Edge cases
	if (nums.size() == 1) return nums[0];
	if (nums.size() == 2) return std::max(nums[0], nums[1]);
	nums[2] += nums[0];
	if (nums.size() == 3) {
		return std::max(nums[1], nums[2]);
	}

	// Check which previous house it would have been most profitable to jump from
	// Store running total and keep track of the maximum return
	auto res{std::max(nums[1], nums[2])};
	for (auto i{3}; i != nums.size(); ++i) {
		nums[i] += std::max(nums[i-2], nums[i-3]);
		res = std::max(res, nums[i]);
	}

	return res;
}