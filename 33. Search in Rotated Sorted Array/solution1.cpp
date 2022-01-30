#include "solution1.hpp"

int Solution::search(std::vector<int>& nums, int target) {
	int start{0}, end{static_cast<int>(nums.size()) - 1};
	
	// Modified binary search
	while (start <= end) {
		auto mid{(start + end) / 2};
		
		if (nums[mid] == target) return mid;
		
		if (nums[mid] < target) {	// target would normally be to the right
			if (nums[end] < nums[mid] || nums[end] >= target) {	// target is to the right
				start = mid + 1;
			} else {	// target is to the left
				end = mid - 1;
			}
		} else {	// target would normally be to the left
			if (nums[start] > nums[mid] || nums[start] <= target) {	// target is to the left
				end = mid - 1;
			} else {	// target is to the right
				start = mid + 1;
			}
		}
	}
	return -1;
}