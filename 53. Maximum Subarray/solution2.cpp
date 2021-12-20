#include "solution2.hpp"

int Solution::maxSubArray(std::vector<int>& nums) {
	int current_max{nums.at(0)};
	int global_max{current_max};

	for (auto i{1}; i < nums.size(); i++) {
		if (nums.at(i) > current_max + nums.at(i)) {
			current_max = nums.at(i);
		} else {
			current_max += nums.at(i);
		}

		if (current_max > global_max) global_max = current_max;
	}

	return global_max;
}