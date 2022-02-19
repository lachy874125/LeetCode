#include "solution3.hpp"

int Solution::firstMissingPositive(std::vector<int>& nums) {
	// Move each number to its correct position (hash map) within the input vector
	for (std::size_t i{0}; i != nums.size(); ++i) {
		// while num is positive, num is less than vector length, number at the correct position is not a duplicate of num
		while (nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i] - 1]) {
			std::swap(nums[i], nums[nums[i] - 1]);
		}
	}

	// Iterate through and find lowest missing positive
	int i{1};
	while (i != nums.size() + 1 && nums[i - 1] == i) ++i;
	return i;
}