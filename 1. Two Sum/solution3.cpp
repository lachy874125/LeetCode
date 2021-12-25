#include "solution3.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
	std::unordered_map<int, int> map{{nums[0], 0}};

	for (int i{1}; i < nums.size(); i++) {
		// Check if in unordered_map
		auto search_result{map.find(target - nums[i])};
		if (search_result != map.end())
			return std::vector<int>{std::min(i, search_result->second), std::max(i, search_result->second)};

		// Add to unordered_map if not already existing
		map.try_emplace(nums[i], i);
	}

	// Search failed
	return std::vector<int>{0, 0};
}