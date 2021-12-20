#include "solution1.hpp"

int Solution::maxSubArray(std::vector<int>& nums) {
	int largest_sum = nums.at(0);
	int sum;
	for (auto subarray_length = 1; subarray_length <= nums.size(); subarray_length++) {
		for (auto nums_idx = 0; nums_idx <= nums.size() - subarray_length; nums_idx++) {
			sum = 0;
			for (auto subarray_idx = 0; subarray_idx < subarray_length; subarray_idx++) {
				sum += nums.at(nums_idx + subarray_idx);
			}
			if (sum > largest_sum) largest_sum = sum;
		}
	}
	return largest_sum;
}