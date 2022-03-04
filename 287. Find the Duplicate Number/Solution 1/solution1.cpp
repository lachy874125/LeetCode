#include "solution1.hpp"

// Finds the first duplicate in a vector of ints
// Moves each element into its "correct" location
// e.g. if nums[i] = 4 then it is moved to index 4-1 (0-based)
int Solution::findDuplicate(std::vector<int>& nums) {
	for (std::size_t i{0}; i < nums.size(); ++i) {	// for each num in nums
		while (nums[i] != static_cast<int>(i) + 1) {	// if num is not in the correct position
			if (nums[nums[i] - 1] == nums[i]) return nums[i];	// if number at correct position is itself in correct position then the duplicate is found
			std::swap(nums[i], nums[nums[i] - 1]);	// otherwise swap until nums[i] is in correct position
		}
	}

	// Error: no duplicates
	return -1;
}