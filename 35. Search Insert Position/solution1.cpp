#include "solution1.hpp"

int Solution::searchInsert(std::vector<int>& nums, int target) {
	int start{0}, end{static_cast<int>(nums.size()) - 1};

	// Binary search
	while (start <= end) {
		auto mid{start + (end - start) / 2};

		if (nums[mid] < target) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}

	return start;
}